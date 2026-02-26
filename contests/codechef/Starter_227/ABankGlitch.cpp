// https://www.codechef.com/START227C/problems/BANKGLITCH
// https://www.codechef.com/viewsolution/1240942628

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans = a+b;
    int maxi = a/x;
    for(int k = 0; k<=maxi;k++){
        int tot = (a - k*x) + (b + k*y);
        if(tot>ans) ans = tot;
    }
    cout<<ans<<'\n';
    return;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
