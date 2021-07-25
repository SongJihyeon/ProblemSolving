//백준
//1764. 듣보잡
//C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int c1, c2;
    cin >> c1 >> c2;
    vector <string> input;
    string temp;
    for(int i=0; i<c1+c2; i++){
        cin >> temp;
        input.push_back(temp);
    }
    sort(input.begin(), input.end());
    
    vector <string> result;
    int count = 0;
    for(int i=0; i<c1+c2; i++){
        if(!input[i].compare(input[i+1])){
            result.push_back(input[i]);
            count++;
        }
    }
    
    cout << count << "\n";
    sort(result.begin(), result.end());
    for(int i=0; i<count; i++){
        cout << result[i] << "\n";
    }
    return 0;
}
