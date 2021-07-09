//백준
//1157. 단어 공부
//C++

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    cin >> input;
    int alpha[26]={0};
    for(int i=0; i<input.size(); i++){
        if(input[i]>=65 && input[i]<=90){
            alpha[input[i]-65]++;
        }
        else if(input[i]>=97 && input[i]<=122){
            alpha[input[i]-97]++;
        }
    }
    
    int max = 0;
    char result;
    for(int i=0; i<26; i++){
        if(alpha[i]>max){
            max = alpha[i];
            result = i+65;
        }
        else if(alpha[i]==max){
            result = '?';
        }
    }
    cout << result;
    return 0;
}
