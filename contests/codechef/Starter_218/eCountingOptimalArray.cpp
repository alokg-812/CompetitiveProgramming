// https://www.codechef.com/START218D/problems/CNTARR7

#include <bits/stdc++.h>
using namespace std;
using ll =long long;
const int mod = 998244353;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n==1){
            cout<<(m+1)%mod<<endl;
            continue;
        }
        int k = 0;
        ll temp =m;
        while(temp > 0){
            k++;
            temp >>=1;
        }
        ll x = (1LL<<k)- 1;
        ll cnt;
        if(x <=m){
            cnt =x+1;
        }
        else{
            cnt = 2*m +1 -x;
        }
        
        cout<<(cnt %mod)<<endl;
    }
    
    return 0;
}
