// https://www.codechef.com/problems/PRSUMARR
// https://www.codechef.com/viewsolution/1214442040

#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(int n, int l){
    int cnt = 0;
    for(int i=l;i*i<=n;i++){
        if(n%i== 0){
            cnt++;
            if(cnt>=2) return 2;
            cnt +=check(n/i, i);
            return min(cnt, 2LL);
        }
    }
    return cnt;
}

signed main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = check(n,2);
        if(c == 0) cout<<1<<"\n";
        else if(c == 1) cout<<2<<"\n";
        else cout<<3<<"\n";
    }
}
