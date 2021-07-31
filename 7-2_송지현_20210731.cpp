//백준
//1755. 숫자놀이
//C++

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string num_char[11] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };
    vector<pair<string ,int> > answer;
    int a, b;
    string temp;

    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(i>=10){
            temp = num_char[i/10] + " " + num_char[i%10];
            answer.push_back(make_pair(temp,i));
        }
        else{
            temp = num_char[i%10];
            answer.push_back(make_pair(temp,i));
        }
    }
    sort(answer.begin(), answer.end());

    for(int i=0; i<answer.size(); i++){
        cout << answer[i].second << " ";
        if(i%10 == 9){
            cout << "\n";
        }
    }
}