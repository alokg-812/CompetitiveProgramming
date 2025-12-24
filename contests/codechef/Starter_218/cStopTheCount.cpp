// https://www.codechef.com/START218D/problems/STOPCOUNT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+(s[i-1] == '1' ?1:0);
        }
        int tot = pre[n];
        int anti = n-tot;
        long long ans = 0;
        for(int k =0;k<=n;k++){
            int vc = pre[k];
            int vac = k-vc;
            if(vc>vac){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
