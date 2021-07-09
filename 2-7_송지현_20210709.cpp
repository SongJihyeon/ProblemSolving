//LeetCode
//844. Backspace String Compare
//C++

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int slen = S.size();
        int tlen = T.size();
        for(int i=0;i<slen;i++){
            if(i==0 && S[i]=='#'){
                S.erase(0, 1);
                i--;
                slen -= 1;
                continue;
            }
            if(S[i]=='#'){
                S.erase(i-1, 2);
                i -= 2;
                slen -= 2;
            }
        }
        for(int i=0;i<tlen;i++){
            if(i==0 && T[i]=='#'){
                T.erase(0, 1);
                i--;
                tlen -= 1;
                continue;
            }
            if(T[i]=='#'){
                T.erase(i-1, 2);
                i -= 2;
                tlen -= 2;
            }
        }
        if(S==T){
            return true;
        }
        return false;
    }
};