
// https://www.codechef.com/problems/SPMISS
// https://www.codechef.com/viewsolution/1214331361


#include <bits/stdc++.h>
using namespace std;

int check(int n,int c){
    vector<int>arr(n);
    string str;
    int sum1=0, sum2=0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cin>>str;
    for(int i = 0;i<n;i++){
        if(str[i] == '0'){
            sum1+=arr[i];
        }
    }
    sum2 = sum1;
    if(sum1>=c){
        sum1-=c;
        for(int i = 0;i<n;i++){
            if(str[i] == '1'){
                sum1+= arr[i];
            }
        }
    }
    return max(sum1,sum2);
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    cout<<check(n,c)<<endl;
	}

}
