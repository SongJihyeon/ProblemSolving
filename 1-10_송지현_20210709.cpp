//백준
//1159. 농구경기
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count;
    int flag=0;
    cin >> count;
    string input;
    int alpha[26]={0};
    for(int i=0; i<count; i++){
        cin >> input;
        alpha[input[0]-97]++;
    }
    for(int i=0; i<26; i++){
        if(alpha[i]>=5){
            cout << (char)(i+97);
            flag=1;
        }
    }
    if(flag == 0){
        cout << "PREDAJA";
    }
}
