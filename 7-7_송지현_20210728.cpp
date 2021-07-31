//백준
//11004. K번째 수
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int input_num;
    int res_num;
    cin >> input_num >> res_num;
    
    int input[input_num];
    for(int i=0; i<input_num; i++){
        cin >> input[i];
    }

    sort(input, input+input_num);
    cout << input[res_num-1] << "\n";
}