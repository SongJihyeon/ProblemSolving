//백준
//3040. 백설 공주와 일곱 난쟁이
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int input[9];
    int sum = 0;
    int fa1=0;
    int fa2=0;
    for(int i=0; i<9; i++){
        cin >> input[i];
    }
    for(int i=0; i<9; i++){
        sum += input[i];
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            if(j!=i){
                if(sum-input[i]-input[j]==100){
                    fa1 = i;
                    fa2 = j;
                    break;
                }
            }
        }
    }
    for(int i=0; i<9; i++){
        if(i!=fa1 && i!=fa2){
            cout << input[i] << "\n";
        }
    }
    return 0;
}
