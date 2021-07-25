//백준
//1181. 단어 정렬
//C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        if(a<b) return true;
        else{
            return false;
        }
    }
    else{
        if(a.length() < b.length()){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(int argc, const char * argv[]) {
    int count;
    cin >> count;
    vector <string> input;
    string tmp;
    for(int i=0; i<count; i++){
        string in;
        cin >> in;
        input.push_back(in);
    }
    sort(input.begin(), input.end(), compare);
    
    for(int i=0; i<count; i++){
        if(tmp == input[i]){
            continue;
        }
        cout << input[i] << "\n";
        tmp = input[i];
    }
    return 0;
}
