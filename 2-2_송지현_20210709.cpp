//백준
//8958. OX퀴즈
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int input_num;
    cin >> input_num;
    string input[100];
    for(int i=0; i<input_num; i++){
        cin >> input[i];
    }
    int count =0;
    int result = 0;
    for(int i=0; i<input_num; i++){
        for(int j=0; j<input[i].length(); j++){
            if(input[i][j] == 'O'){
                count++;
                result += count;
            }
            else if(input[i][j] == 'X'){
                count = 0;
            }
        }
        cout << result << "\n";
        count = 0;
        result = 0;
    }
    return 0;
}