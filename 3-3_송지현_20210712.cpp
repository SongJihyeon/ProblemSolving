//백준
//5598. 카이사르 암호
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string input;
    cin >> input;

    for(int i=0; i<input.size(); i++){
        if((char)((int)input[i]-3)>=65){ //뒤로 돌아가지 않는 경우
            cout << (char)((int)input[i]-3);
        }
        else{ //A, B, C인 경우처럼 뒤로 돌아가야하는 경우
            cout << (char)((int)input[i]-3+26);
        }
    }
}

//쉽게 해결할 수 있는 문제였던 것 같다.