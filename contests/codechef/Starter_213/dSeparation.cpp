// https://www.codechef.com/problems/SEPX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int>arr(n);
	    bool flag1 = false;
	    int cntS = 0, cntL = 0;
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i] == x) flag1 = true;
	        if(arr[i] > x) cntL++;
	        if(arr[i] < x) cntS++;
	    }
	    if((cntL == n) or (cntS == n)){
	        cout<<"Yes\n";
	        continue;
	    }
	    if(flag1){
	        cout<<"Yes\n";
	        continue;
	    }
	    cout<<"No\n";
	    
	}

}

