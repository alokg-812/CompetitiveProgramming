// https://www.codechef.com/START227C/problems/BUYTICK
// https://www.codechef.com/viewsolution/1240957728


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    vector<int> avail;
    for(int i = 0;i<n;i++){
        if(str[i] == '0'){
            avail.push_back(arr[i]);
        }
    }
    if((int)avail.size() <k){
        cout<<-1 <<'\n';
        return;
    }
    sort(avail.begin(), avail.end());
    int mini = 0;
    for(int i = 0;i<k;i++){
        mini += avail[i];
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

