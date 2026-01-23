// https://www.codechef.com/START222C/problems/SORTPREF

// https://www.codechef.com/viewsolution/1227019686

#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i = 1;i<=n;i++) cin>>arr[i];
    int last = -1;
    for(int i = n;i>=1;i--){
        if(arr[i] !=i){
            last = i;
            break;
        }
    }
    if(last == -1){
        cout<<0<<endl;
    }else{
        cout<<arr[last]<<endl;
    }
    return;
}


int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
