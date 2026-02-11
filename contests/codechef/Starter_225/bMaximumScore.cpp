

#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    vector<long long>brr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    for(int i =0;i<n;i++) cin>>brr[i];
    
    long long tot=0,mini=LLONG_MAX;
    for(int i =0;i<n;i++){
        long long p = arr[i]-brr[i];
        tot+=arr[i];
        mini= min(mini, p);
    }
    long long ans = tot-mini;
    cout<<ans<<endl;
    return;
}
 


int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
