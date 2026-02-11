// https://www.codechef.com/problems/ALLEV

#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;
    int sum=0;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    check();
	}

}
