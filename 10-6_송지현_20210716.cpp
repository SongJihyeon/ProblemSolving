//LeetCode
//67. Add Binary
//C++

class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int carry = 0;
        for(int i=a.size()-1, j=b.size()-1; i>=0 || j>=0; i--, j--){
            int numa=0, numb=0;
            if(i>=0){
                numa = a[i]-'0';
            }
            if(j>=0){
                numb = b[j]-'0';
            }
            if(numa+numb+carry>=2){
                if(numa+numb+carry == 2){
                    result = "0"+result;
                    carry = 1;
                }
                else{
                    result = "1"+result;
                    carry = 1;
                }
            }
            else{
                if(numa+numb+carry==1){
                    result = "1"+result;
                }
                else{
                    result = "0"+result;
                }
                carry = 0;
            }
        }
        if(carry == 1){
            result = "1"+result;
        }
        return result;
    }
};