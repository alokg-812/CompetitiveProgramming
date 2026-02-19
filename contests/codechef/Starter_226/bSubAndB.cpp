// https://www.codechef.com/START226C/problems/SUBAADDB
// https://www.codechef.com/viewsolution/1237499405

#include <bits/stdc++.h>
using namespace std;
void check(){
  int n,a,b;
  cin>>n>>a>>b;
  int diff = a-b;
  while(n >= a){
    n -=diff;
  }
  cout<<n<<endl;
}

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
    check();
  }
}
