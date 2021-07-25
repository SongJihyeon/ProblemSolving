//백준
//10814. 나이순 정렬
//C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int num;
    cin >> num;
    vector<pair<int, string> > vec(num);
    for(int i=0; i<num; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    stable_sort(vec.begin(), vec.end(), comp);

    for(int i=0; i<num; i++){
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}