//백준
//2775. 부녀회장이 될테야
//C++

#include <iostream>
using namespace std;

int people(int k, int n){
    if(k == 0){
        return n;
    }
    if(n == 1){
        return 1;
    }
    return(people(k-1, n)+people(k, n-1));
}

int main(int argc, const char * argv[]) {
    int count;
    cin >> count;
    int k, n;
    for(int i=0; i<count; i++){
        cin >> k >> n;
        cout << people(k, n) << "\n";
    }
    return 0;
}

//처음 읽었을 때 문제를 이해하는 것에 약간 어려움을 겪었던 것 같지만 문제를 이해한 이후에는 어렵지 않게 이해할 수 있었다.