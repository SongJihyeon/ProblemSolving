//백준
//2164. 카드2
//C++

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    queue <int> q;
    
    cin >> n;
    for(int i=0; i<n; i++){
        q.push(i+1);
    }
    
    while(q.size() >1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front() << "\n";
    
    return 0;
}
