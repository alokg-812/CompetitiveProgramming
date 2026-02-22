class Solution {
public:
    string maximumXor(string s, string t) {
        int o=count(t.begin(),t.end(),'1');
        int z=t.size()-o;
        string r="";
        for(char c:s){
            if(c=='1'){
                if(z>0){
                    r+='1';
                    z--;
                }
                else{
                    r+='0';
                    o--;
                }
            }
            else{
                if(o>0){
                    r+='1';
                    o--;
                }
                else{
                    r+='0';
                    z--;
                }
            }
        }
        return r;
    }
};
