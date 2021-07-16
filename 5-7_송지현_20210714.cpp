//백준
//2941. 크로아티아 알파벳
//C++

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector <string> cro = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string input;
    cin >> input;
    
    int index;
    for(int i=0; i<cro.size(); i++){
        index = input.find(cro[i]);
        for(; index != string::npos; index = input.find(cro[i]))
            input.replace(index, cro[i].size(),"c");
    }
    cout << input.size();
    return 0;
}