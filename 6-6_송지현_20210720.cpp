//백준
//1431. 시리얼 번호
//C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    if(a.size() != b.size()){ //1번 경우
        return a.size()<b.size();
    }
    else{
        //2번 경우
        int sum_a = 0, sum_b = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i]>='1' && a[i]<='9'){
                sum_a += (a[i]-'0');
            }
            if(b[i]>='1' && b[i]<='9'){
                sum_b += (b[i]-'0');
            }
        }
        if(sum_a != sum_b){
            return sum_a < sum_b;
        }
        else{
            return a<b; //3번 경우
        }
    }
}

int main(){
    int num;
    cin >> num;
    vector<string> input;
    for(int i=0; i<num; i++){
        string tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end(), comp);
    for(int i=0; i<num; i++){
        cout << input[i]<< endl;
    }
}