#include <bits/stdc++.h>
using namespace std;

void check(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;
    int tSum=0,mSum=0;
    for(int i =0;i<n;i++){
        int x = arr[i];
        cin>>x;
        if(i%2==0){
            tSum+=x;
            minHeap.push(x);
        }
        else{
            mSum+=x;
            maxHeap.push(x);
        }
    }
    if(k==0 and tSum<=mSum){
        cout<<"NO\n";
        return;
    }
    bool flag = true;
    while(flag){
        if(tSum>mSum){
            flag=false;
            cout<<"YES\n";
            return;
        }
        int msumm = maxHeap.top();
        int tsumm = minHeap.top();
        tSum+=msumm;
        mSum -= tsumm;
        swap(msumm, tsumm);
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
