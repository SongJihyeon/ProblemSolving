//LeetCode
//686. Repeated String Match
//C++

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int count=1;
        string temp=A;
        while(temp.size() <= A.size()+B.size()){
            if(temp.find(B) != string::npos) return count;
            temp+=A;
            count++;
        }
        if(temp.find(B)!=string::npos){
            return count;
        }
        else{
            return -1;
        }
    }
};