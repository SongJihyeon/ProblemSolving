//백준
//2953. 나는 요리사다
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num[5][4] = {0};
    for(int i =0; i<5; i++){
        for(int j=0; j<4; j++){
            cin >> num[i][j];
        }
    }
    int score[5] = {0};
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            score[i] += num[i][j];
        }
    }
    int max_index =0;
    for(int i=1; i<5; i++){
        if(score[max_index]<score[i]){
            max_index = i;
        }
    }
    cout << max_index+1 << " " << score[max_index];
    return 0;
}
