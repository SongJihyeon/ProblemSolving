//백준
//1427. 소트인사이드
//C++

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string input;
    cin >> input;
    sort(input.begin(), input.end(), greater<int>());
    for(int i=0; i<input.size(); i++){
        cout << input[i];
    }
}