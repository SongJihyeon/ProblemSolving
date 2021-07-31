//LeetCode
//1190. Reverse Substrings Between Each Pair of Parentheses
//C++

class Solution {
public:
    string reverseParentheses(string s) {
        string str, result;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ')'){
                while(str.empty()==false && str.back()!='('){
                    result += str.back();
                    str.pop_back();
                }
                str.pop_back();
                for(int i=0; i<result.size(); i++){
                    str += result[i];
                }
                result.clear();
            }
            else{
                str += s[i];
            }
        }
        return str;
    }
};