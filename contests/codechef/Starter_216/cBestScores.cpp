// https://www.codechef.com/START216D/problems/BESTSEATS
// https://www.codechef.com/viewsolution/1217068004

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i = 0;i<n;i++) cin>>arr[i];
	    int ans= arr[0] + arr[1];
	    for(int i = 1;i<n;i++){
	        int sum = arr[i-1] + arr[i];
	        ans = min(sum, ans);
	    }
	    cout<<ans<<endl;
	}

}
