// https://www.codechef.com/START218D/problems/DELARR77

#include <bits/stdc++.h>
using namespace std;

void check() {
    int n;
    if(!(cin >> n)) return;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    vector<int>c(n);
    for (int i = 0;i<n;i++) cin>>c[i];

    long long tot= 0;
    int curr = 200;
    for(int i = 0;i<n;i++){
        if(c[i]<curr){
            curr = c[i];
        }
        tot+=(long long)arr[i]* curr;
    }
    cout<<tot<<endl;
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        check();
    }
    return 0;
}
