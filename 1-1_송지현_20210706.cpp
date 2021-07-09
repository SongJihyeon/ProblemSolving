//백준 2920 음계

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int input[8];

    for(int i=0; i<8; i++){
        cin >> input[i];
    }
    
    int i;
    for(i=0; i<7; i++){
        if(input[i] > input[i+1]){
            break;
        }
    }

    int j;
    for(j=0; j<7; j++){
        if(input[j] < input[j+1]){
            break;
        }
    }
    if(i == 7){
        cout << "ascending";
    }
    else if(j == 7){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }
}