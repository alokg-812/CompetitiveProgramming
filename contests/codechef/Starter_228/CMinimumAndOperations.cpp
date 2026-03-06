// https://www.codechef.com/START228C/problems/BOP3
// https://www.codechef.com/viewsolution/1244302776


#include <bits/stdc++.h>
using namespace std;

void check(){
    long long n;
    cin>>n;
    long long k = n/2;
    long long ans = k*(k+1);
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
