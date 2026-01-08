// https://www.codechef.com/START220C/problems/UPPATH
// https://www.codechef.com/viewsolution/1224273076

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 7;
const int NEG_INF = -1e9 - 7;

void check(){
    int n;
    cin>>n;
    vector<int>a1(n), a2(n);
    for(int i = 0;i<n;i++) cin>>a1[i];
    for(int i = 0;i<n;i++) cin>>a2[i];
    vector<int>l(n, INF);
    l[0] = min(a1[0], a2[0]);
    for(int i = 1;i<n;i++){
        int val1 = a1[i];
        int val2 = a2[i];
        int prev = l[i-1];
        if(prev == INF){
            l[i] = INF;
            continue;
        }
        int curr = INF;
        if (val1 >=prev) curr = min(curr,val1);
        if (val2 >=prev) curr = min(curr,val2);
        
        l[i]=curr;
    }
    vector<int>r(n, NEG_INF);
    r[n-1] = max(a1[n-1], a2[n-1]);
    for(int i =n-2;i>=0;i--){
        int val1 = a1[i];
        int val2 = a2[i];
        int next = r[i+1];
        if(next == NEG_INF){
            r[i] = NEG_INF;
            continue;
        }
        int maxi = NEG_INF;
        if (val1<= next) maxi = max(maxi, val1);
        if (val2<= next) maxi = max(maxi, val2);
        r[i] = maxi;
    }
    
    bool flag = false;
    for(int k = 0;k<n;k++){
        int u = a1[k];
        int v = a2[k];
        bool pre1 = (k == 0) || (l[k-1] != INF && u >= l[k-1]);
        bool suf1 = (k == n-1) || (r[k+1] != NEG_INF && v <= r[k+1]);
        bool step1 = (u <= v);
        if(pre1 and suf1 and step1){
            flag = true;
            break;
        }
        bool pre2 = (k == 0) || (l[k-1] != INF && v >= l[k-1]);
        bool suf2 = (k == n-1) || (r[k+1] != NEG_INF && u <= r[k+1]);
        bool step2 = (v <= u);
        
        if(pre2 && suf2 && step2){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
}


int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        check();
    }

}
