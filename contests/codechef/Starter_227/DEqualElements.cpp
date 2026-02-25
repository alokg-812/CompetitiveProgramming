// https://www.codechef.com/START227C/problems/EQELE


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    int ans = 0;
    int curr = 1;
    vector<int>seen(n+1,0);
    for(int i =0;i<n;i++){
        if(seen[arr[i]] == curr){
            ans+=2;
            curr++;
        }
        else{
            seen[arr[i]] = curr;    
        }
    }
    cout<<ans<<'\n';
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
