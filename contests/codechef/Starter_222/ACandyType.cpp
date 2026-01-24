// https://www.codechef.com/START222C/problems/CANDYTYPE
// https://www.codechef.com/viewsolution/1226951313


#include <bits/stdc++.h>
using namespace std;

void check (){
    int n;
    cin>>n;
    map<int, int> freq;
    int maxi = 0;
    for(int i =0;i<n;i++){
        int k;
        cin>>k;
        freq[k]++;
        maxi=max(maxi, freq[k]);
    }
    int ans = INT_MAX;
    for(auto& p : freq){
        if(p.second == maxi){
            ans = min(ans, p.first);
        }
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    check();
	}

}
