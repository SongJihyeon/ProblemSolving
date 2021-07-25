//백준
//11650. 좌표 정렬하기
//C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<pair<int, int> > vec(num);
    for(int i=0; i<num; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<num; i++){
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}