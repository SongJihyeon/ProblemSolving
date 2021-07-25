//LeetCode
//1047. Remove All Adjacent Duplicates In String
//C++

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> res;
        for(int i=0; i<s.size(); i++){
            if(res.empty() == true){
                res.push(s[i]);
            }
            else if(res.top() != s[i]){
                res.push(s[i]);
            }
            else if(res.top() == s[i]){
                res.pop();
            }
        }
        
        string result;
        while(!res.empty()){
            result += res.top();
            res.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};