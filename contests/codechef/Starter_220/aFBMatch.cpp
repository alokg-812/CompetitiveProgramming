

#include <bits/stdc++.h>
using namespace std;

void check(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    unordered_set<char> hs;
    for(char c:str){
        hs.insert(c);
    }
    if(hs.size() == n){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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
