class Solution {
public:
    int minimumChairs(string s) {
        int E=0;
        int L =0;
        int req_chair=0;

        for (int i=0;i<s.length();i++){
            if(s[i]=='E'){
                E++;
            }
            else{
                //req_chair=max(E,E-L);

                L++;
               
            }
        req_chair=max(req_chair,E-L);

        }
        return (req_chair);
    }
};