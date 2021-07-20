//백준
//10867. 중복 빼고 정렬하기
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    int input[num];
    for(int i=0; i<num; i++){
        cin >> input[i];
    }
    sort(input, input+num);

    int temp = 0;
    for(int i=0; i<num; i++){
        if(input[i]!= temp){
            cout << input[i] << " ";
            temp = input[i];
        }
    }
}