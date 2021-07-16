//백준
//2783. 삼각 김밥
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float gram, payment;
    float min;
    cin >> payment >> gram;
    min = payment/gram*1000;
    int count;
    cin >> count;
    for(int i=0; i<count; i++){
        cin >> payment >> gram;
        if(payment/gram*1000 <= min){
            min =payment/gram*1000;
        }
    }
    printf("%.2f",min);
    return 0;
}
