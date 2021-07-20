//백준
//5355. 화성 수학
//C++

#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    getchar();
    string str;
    float num;

    for(int i=0; i<test; i++){
        cin >> num;
        getline(cin, str, '\n');
        for(int j=0; j<str.size(); j++){
            if(str[j] ==  '@'){
                num *= 3;
            }
            if(str[j] == '%'){
                num += 5;
            }
            if(str[j] == '#'){
                num -= 7;
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << num << endl;
    }
}