// https://www.codechef.com/START218D/problems/BALLOONS
// https://www.codechef.com/viewsolution/1221058737

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
	    int sum = 0;
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	        sum += ((i+1)*arr[i]);
	    }
	    cout<<sum<<endl;
	}

}
