class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int f[]={1,1,2,6,24,120,720,5040,40320,362880};
        string s=to_string(n);
        int sum=0;
        for(char c:s){
            sum+=f[c-'0'];
        }
        string t=to_string(sum);
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
