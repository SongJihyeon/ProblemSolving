//LeetCode 
//455. Assign Cookies
//C++
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int result = 0;
        int i=0, j=0;
        while(i < g.size() && j < s.size()){
            while(j< s.size()){
                if(s[j] >= g[i]){
                    j++;
                    result ++;
                    break;
                }
                j++;
            }
            i++;
        }
        
        return result;
    }
};