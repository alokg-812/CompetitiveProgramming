// https://www.codechef.com/problems/MINDIS6
// https://www.codechef.com/viewsolution/1237601418

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    
    vector<int> a(n);
    map<int, int> freq;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    int fir= a[0];
    vector<int> oth;
    for(auto const& [val, cnt] : freq){
        if(val != fir){
            oth.push_back(cnt);
        }
    }
    sort(oth.begin(), oth.end());
    int dis=freq.size();
    for(int f:oth){
        if(k>=f){
            k -=f;
            dis--;
        }
        else{
            break; 
        }
    }
    cout<<dis<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
