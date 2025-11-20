// https://www.codechef.com/START213D/problems/NO4S
// https://www.codechef.com/viewsolution/1209576158

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 1) cnt1++;
            else if(arr[i] == 3) cnt3++;
            else cnt2++;
        }
        int max_keep = max(cnt1 + min(1, cnt2), cnt3 +min(1, cnt2));
        cout<<n - max_keep<<endl;
    }
}
