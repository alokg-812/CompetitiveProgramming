// https://www.codechef.com/START213D/problems/EXMLF1
// https://www.codechef.com/viewsolution/1209536294

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>dis(n);
	    vector<int>tim(n);
	    vector<int>ans(n);
	    int maxi = 0;
	    int answer = 0;
	    for(int i = 0;i<n;i++){
	        cin>>dis[i]>>tim[i];
	        ans[i] = dis[i]/tim[i];
	        maxi = max(maxi,ans[i]);
	    }
	    for(int i= 0;i<n;i++){
	        if(maxi == ans[i]){
	            answer = i+1;
	            break;
	        }
	    }
	    cout<<answer<<endl;
	}

}
