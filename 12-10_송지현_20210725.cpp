//백준
//10250. ACM 호텔
//C++

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count;
    cin >> count;
    int i=1;
    while(i<=count){
        int h, w, p;
        cin >> h >> w >> p;
        int x, y;
        y = p%h;
        if(y==0){
            y = h;
        }
        x = p/h+1;
        if(p%h==0){
            x-=1;
        }
        cout << y*100+x << "\n";
        i++;
    }
    return 0;
}
