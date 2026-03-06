// https://www.codechef.com/START228C/problems/MNERROR
// https://www.codechef.com/viewsolution/1244309739

#include <bits/stdc++.h>
using namespace std;

void check(){
    long long n,q;
    cin>>n>>q;
    long long k = (n+q)/(q+1);
    long long ans = k/2;
    cout<<ans<<endl;
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
