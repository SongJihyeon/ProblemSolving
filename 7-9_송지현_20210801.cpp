//LeetCode
//1209. Remove All Adjacent Duplicates in String II
//C++

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> sta;
        string result="";
        for (int i=0;i<s.length();i++){
          if (sta.empty()){
              sta.push(make_pair(s[i],1));
          }
          else if (sta.top().first==s[i]){
              sta.top().second++;
          }
          else{
              sta.push(make_pair(s[i],1));
          }
           if (!sta.empty () && sta.top().second==k){
              sta.pop();
          }
        }
        while (!sta.empty()){
            while(sta.top().second--){
                result+=sta.top().first;
            } 
            sta.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};