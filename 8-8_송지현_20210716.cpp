//백준
//15552. 빠른 A+B
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base :: sync_with_stdio(false);
    int num1, num2;
    int count;
    cin >> count;
    for(int i=1; i<=count; i++){
        cin >> num1 >> num2;
        cout << num1+num2 << "\n";
    }
    return 0;
}