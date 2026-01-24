// https://www.codechef.com/START222C/problems/LAYERCAKE
// https://www.codechef.com/viewsolution/1226969349

#include <bits/stdc++.h>
using namespace std;

void check(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    long long ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(a[i]> b[j]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}


int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
