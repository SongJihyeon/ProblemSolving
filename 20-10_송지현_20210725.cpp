//백준
//5397. 키로거
//C++

#include <iostream>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    int number;
    cin >> number;
    string input;
    list<char> l;
    list<char>::iterator t;
    
    for(int i=0; i<number; i++){
        cin >> input;
        l.clear();
        t = l.begin();
        for(int j=0; j<input.length(); j++){
            if(input[j] == '<' && t!=l.begin()){
                t--;
            }
            else if(input[j]=='>' && t!=l.end()){
                t++;
            }
            else if(input[j]=='-' && t!= l.begin()){
                t=l.erase(--t);
            }
            else if(input[j]!='<' && input[j]!='>' && input[j]!='-'){
                l.insert(t, input[j]);
            }
        }
        for(t = l.begin(); t != l.end(); t++){
            cout << *t;
        }
        cout << "\n";
    }
    return 0;
}
