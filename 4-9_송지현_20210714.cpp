//백준
//1476. 날짜계산
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int e, s, m;
    cin >> e >> s >> m;
    int result=1;
    while(1){
        if((result-e)%15==0 && (result-s)%28==0 && (result-m)%19==0){
            cout << result;
            break;
        }
        result++;
    }
    return 0;
}
