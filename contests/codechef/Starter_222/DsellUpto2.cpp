// https://www.codechef.com/START222C/problems/SELL2
// https://www.codechef.com/viewsolution/1227041918


#include <bits/stdc++.h>
using namespace std;

struct Sale{
    long long pr;
    int day;
    bool operator>(const Sale& other) const{
        return pr >other.pr;
    }
};


void check(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<Sale> sale;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        int day = i+1;
        sale.push_back({arr[i], day});
        sale.push_back({arr[i], day});
    }
    sort(sale.begin(),sale.end(), [](const Sale& a, const Sale& b){
        return a.pr> b.pr;
    });
    set<int> av;
    for(int i = 1;i<=n;i++){
        av.insert(i);
    }
    long long maxi= 0;
    for(const auto& s : sale){
        if (av.empty()) break;
        auto it = av.upper_bound(s.day);
        if(it!= av.begin()){
            --it;
            maxi += s.pr;
            av.erase(it);
        }
    }
    cout<<maxi<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    check();
	}
}
