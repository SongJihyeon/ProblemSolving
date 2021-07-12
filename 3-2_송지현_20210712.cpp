//백준
//11721. 열 개씩 끊어 출력하기
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string input;
    cin >> input;
    for(int i=0; i<input.size(); i++){
        if(i%10 == 0 && i!=0){
            cout << "\n";
        }
        cout << input[i];
    }
}

//쉽게 해결할 수 있는 문제였던 것 같다.