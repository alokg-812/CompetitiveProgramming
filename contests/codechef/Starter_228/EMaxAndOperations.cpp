#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long power(long long base, long long exp){
    long long res = 1;
    base %= MOD;
    while(exp>0){
        if (exp%2 == 1) res = (res*base) % MOD;
        base = (base*base) % MOD;
        exp/=2;
    }
    return res;
}
long long mod(long long n){
    return power(n, MOD-2);
}

void check(){
    long long n, m;
    cin>>n>>m;
    long long p1 = n%MOD;
    p1 = (p1 * power(m, n-1)) %MOD;
    
    long long sumM = (m%MOD)*((m+1) %MOD) %MOD;
    sumM = (sumM *mod(2)) %MOD;
    
    p1 = (p1*sumM) %MOD;
    long long p2=0;
    for(long long x = 1;x<=m;x++){
        p2 =(p2+power(x, n)) %MOD;
    }
    int ans = (p1-p2+MOD) %MOD;
    
    cout<<ans<<endl;
    return;
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
