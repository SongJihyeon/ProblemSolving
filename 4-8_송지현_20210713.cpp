//백준
//1712. 손익분기점
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    if(b>=c){
        cout << -1;
    }
    else{
        cout << a/(c-b)+1;
    }
    return 0;
}