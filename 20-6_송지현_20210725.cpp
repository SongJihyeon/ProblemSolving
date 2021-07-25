//백준
//2798. 블랙잭
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    int input[101];
    int result;
    int temp;
    int min = 999999999;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> input[i];
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(i!=j && j!=k && k!=i){
                    temp = input[i]+input[j]+input[k];
                    if(m-temp <=min && temp<=m){
                        min = m-temp;
                        result = temp;
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}
