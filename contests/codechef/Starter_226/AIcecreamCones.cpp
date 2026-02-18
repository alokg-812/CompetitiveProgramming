// https://www.codechef.com/problems/ICECONE6
// https://www.codechef.com/viewsolution/1237477494

#include <bits/stdc++.h>
using namespace std;

void check(){
    int x,y,n;
    cin>>n>>x>>y;
    if(n<(x*y)){
        cout<<0<<endl;
        return;
    }
    cout<<(n-(x*y))<<endl;
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
