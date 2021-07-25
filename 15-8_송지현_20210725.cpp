//백준
//2846. 오르막길
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int input_num;
    cin >> input_num;
    int input[1001];
    for(int i=0; i<input_num; i++){
        cin >> input[i];
    }
    int min = 0;
    int max = 0;
    int result = 0;
    for(int i=0; i<input_num-1; i++){
        if(input[i] < input[i+1]){
            //cout << input[max] << " " << input[min] << "\n";
            max++;
            if(result < input[max]-input[min]){
                result = input[max] - input[min];
            }
        }
        else if(input[i]>=input[i+1]){
            max = i+1;
            min = i+1;
        }
    }
    cout << result;
}
