//LeetCode
//6. ZigZag Conversion
//C++

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1){
            return s;
        }
        
        bool flag;
        int tmp=0;
        string result_tmp[numRows];
        string result;
        
        for(int i=0;i<numRows;i++)
            result_tmp[i]="";
        
        for(int i=0; i<s.size(); i++){
            result_tmp[tmp] += s[i];
            
            if(tmp==0){
                flag = true;
            }
            if(tmp == numRows-1){
                flag = false;
            }
            if(flag==true){
                tmp++;
            }
            else{
                tmp--;
            }
        }
        
        for(int i=0; i<numRows;i++){
            result+= result_tmp[i];
        }
        return result;
    }
};