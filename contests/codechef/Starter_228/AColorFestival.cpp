// https://www.codechef.com/START228C/problems/BOP2

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
	    unordered_set<int>un;
	    for(int i =0;i<n;i++){
	        int x;
	        cin>>x;
	        arr[i] = x;
	        un.insert(x);
	    }
	    cout<<un.size()<<endl;
	}

}
