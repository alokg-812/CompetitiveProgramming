// https://www.codechef.com/problems/P5HOME
// https://www.codechef.com/viewsolution/1211935219

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=2){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<(((n-2)*(n-2))/4)<<endl;
	    }
	}

}
