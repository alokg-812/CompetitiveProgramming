// https://www.codechef.com/START227C/problems/DICEERMAX
// https://www.codechef.com/viewsolution/1240969914


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(){
    int n,s;
    cin>>n>>s;
    int mini = max(0, s-5*n);
    int maxi = 6*n - mini;
    cout<<maxi<<endl;
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
