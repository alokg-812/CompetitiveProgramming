// https://www.codechef.com/problems/GEMBUND
// https://www.codechef.com/viewsolution/1214296744


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r,b,g;
	    cin>>r>>b>>g;
	    int sum = r+b+g;
	    int mini = min(r,min(b,g));
	    int ans = 0;
	    ans = mini*10;
	    int rest = sum-(3*mini);
	    cout<<(rest*3)+mini*10<<endl;
	}

}
