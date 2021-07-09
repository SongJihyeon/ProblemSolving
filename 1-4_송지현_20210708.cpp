//백준 
//4344번 평균은 넘겠지
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;

    int input[100][1000];
    int student[100];
    float avg[100];
    
    //input 받기
    for(int i=0; i<num; i++){
        cin >> student[i];
        for(int j=0; j<student[i]; j++){
            cin >> input[i][j];
            avg[i]+= input[i][j]; //평균 구하기 위해 받은 input 더하기
        }
    }

    //평균 구하기
    for(int i=0; i<num; i++){
        avg[i] /= student[i]; 
    }
    
    int count =0;
    for(int i=0; i<num; i++){
        for(int j=0; j<student[i]; j++){
            if(input[i][j] > avg[i]){
                count++;
                //cout << count << " ";
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)count/student[i]*100 << "%\n";
        count = 0;
    }
}