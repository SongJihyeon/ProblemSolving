//백준
//1316. 그룹 단어 체커
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count;
    string input;
    cin >> count;
    int result = 0;
    for(int i=0; i<count; i++){
        cin >> input;
        int j;
        int alpha[26] = {0};
        alpha[input[0]-97] =1;
        for(j=1; j<input.size(); j++){
            if(input[j-1]!=input[j]){
                if(alpha[input[j]-97]==0){
                    alpha[input[j]-97]++;
                }
                else{
                    break;
                }
            }
        }
        if(j == input.size()){
            result++;
        }
    }
    cout << result;
    
    return 0;
}
