//프로그래머스
//2016년
//C++

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer[] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    
    for(int i = 0; i<a-1; i++){
        sum += month[i];
    }
    sum += b;
    return answer[sum%7];
}