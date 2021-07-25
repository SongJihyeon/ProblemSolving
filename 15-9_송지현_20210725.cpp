//백준
//3663. 고득점
//C++
 
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count;
    cin >> count;
    
    for(int i=0; i<count; i++){
        string input;
        cin >> input;
        
        int result=0;
        int max = 2e9;
        int right, left, temp=0;
        
        for(int j=0; j<input.size(); j++){
            result += min(input[j]-'A', 'Z'-input[j]+1);
        }
        for (int i = 0, j; i < input.size(); i++) {
            for (j = i + 1; j < input.size() && input[j] == 'A'; j++);
            if (input[i] == 'A' && j == input.size() + 1) break;
            right = i * 2 + input.size() - j;
            left = i + (input.size() - j) * 2;
            temp = min(left, right);
            max = min(temp, max);
        }
        cout << result+max << "\n";
    }
    return 0;
}
