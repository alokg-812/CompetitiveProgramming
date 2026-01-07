// https://www.codechef.com/START220C/problems/TWOPLG
// https://www.codechef.com/viewsolution/1224251667


#include <bits/stdc++.h>
using namespace std;

void check(){
    long long x,y;
    cin>>x>>y;
    if(x%2!=0){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
    }
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
