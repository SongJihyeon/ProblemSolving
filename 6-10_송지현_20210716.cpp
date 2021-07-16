//백준
//11478. 서로 다른 부분 문자열의 개수
//C++

#include <iostream>
#include <set>
using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    set<string> result;
    cin >> input;
    string temp;

    for(int i=0; i<input.length(); i++){
        temp ="";
        for(int j=i; j<input.length(); j++){
            temp = temp + input[j];
            result.insert(temp);
        }

    }
    
    cout << result.size();
    return 0;
}
