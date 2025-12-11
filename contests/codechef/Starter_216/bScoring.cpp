// https://www.codechef.com/START216D/problems/SCORING
// https://www.codechef.com/viewsolution/1217061983

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<((y+x)/2)<<" "<<((y-x)/2)<<endl;
    }
}
