#include <bits/stdc++.h>
using namespace std;

void check(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i = 1; i <=n+1;i++){
        cin>>arr[i];
    }
    int mini = INT_MAX;
    for(int k = 1;k<=n;k++){
        int curr = max(arr[k], arr[k+1]);
        mini = min(mini,curr);
    }
    cout<<mini<<'\n';
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
