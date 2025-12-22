#include <bits/stdc++.h>
using namespace std;

void check(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>mrr;
    vector<int>trr;
    int sum = 0;
    for(int i =0;i<n;i++){
        int x = arr[i];
        cin>>x;
        sum+=x;
        if(i%2==0) trr.push_back(x);
        else mrr.push_back(x);
    }
    
    sort(mrr.begin(), mrr.end(), greater<int>());
    sort(trr.begin(), trr.end(), greater<int>());
    int moves = n/2;
    int i=0,j=0,sum2=0;
    while(k and moves>0){
        if(trr[i]>mrr[j]){
            sum2+=trr[i];
            i++;
            k--;
        }
        else{
            sum2+=mrr[j];
            j++;
        }
        moves-=1;
    }
    while(moves>0){
        sum2+=mrr[j++];
        moves-=1;
    }
    if(sum2>sum-sum2){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";

    return;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        check();
    }
    return 0;
}
