//백준
//17210. 문문문
//C++

#include <iostream>
using namespace std;

int main(){
    int num, start;
    cin >> num >> start;
    for(int i=1; i<num; i++){
        if(num >= 6){ //6 이상일 경우 2의 배수와 3의 배수의 같은 문 조건에 부합하지 못함
            cout << "Love is open door";
            break;
        }
        if(i%2 == 0){
            cout << start << "\n";
        }
        else if(i%2 == 1){
            cout << !(start) << "\n";
        }
    }
}

//그리 어렵지 않게 해결할 수 있는 문제였다.