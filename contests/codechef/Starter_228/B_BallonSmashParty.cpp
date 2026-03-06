// https://www.codechef.com/START228C/problems/BOP3E
// https://www.codechef.com/viewsolution/1244291775

#include <bits/stdc++.h>
using namespace std;

void check(){
    int n;
    cin>>n;
    
    vector<int>a(n);
    vector<vector<int>> an(n+1); 
    for (int i = 0; i<n;i++){
        cin>>a[i];
        if(a[i] <= n){
            an[a[i]].push_back(i);
        }
    }
    vector<int>ans(n,-1);
    int b = 0;
    for(int i = 0;i<n;i++){
        if(ans[i] != -1){
            continue;
        }
        ans[i] = b;
        b++;
        if(b<=n){
            for(int j : an[b]){
                if(ans[j] == -1){
                    ans[j] = b;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<(i == n-1 ? "" : " ");
    }
    cout<<endl;
    return;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
