// https://www.codechef.com/START217D/problems/MAXADD

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(){
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(n), brr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    for(int i =0;i<n;i++) cin>>brr[i];
    ll tot=0, y= -2e18;
    for(int i = 0;i<n;i++){
        tot+=brr[i];
        y= max(y, arr[i]-tot);
    }
    ll ans=0;
    if(y<1){
        ans=(m*(m+1)/2) + (m*tot);
    }
    else if(y>=m){
        ans=m*(y+tot);
    }
    else{
        ans = y*(y+tot);
        ll num = m-y;
        ll fir = (y+1) + tot;
        ll lst = m+tot;
        ans+= (num*(fir+lst))/2;
    }
    cout<<ans<<endl;

}   

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
        check();
    }
    
}
