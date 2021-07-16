//백준
//6571. 피보나치 수의 개수
//C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string fib[1000]={"0", "1"};

string sum(string x, string y){
    vector<int> result;
    int carry = 0;
    string str;
    
    while(1){
        string n1, n2;
        if(x.empty()==true){
            n1 = "0";
        }
        else{
            n1 = x.at(x.size()-1);
        }
        
        if(y.empty()==true){
            n2="0";
        }
        else{
            n2 = y.at(y.size()-1);
        }
        
        int num = carry+stoi(n1)+stoi(n2);
        carry = 0;
        
        if(num>=10) carry = num/10;
        result.insert(result.begin(),num%10);
        
        if(x.empty() == false){
            x.pop_back();
        }
        if(y.empty()==false){
            y.pop_back();
        }
        if(x.empty()==true && y.empty()==true) break;
    }
    if(carry > 0){
        result.insert(result.begin(), carry);
    }
    for(int i=0; i<result.size(); i++){
        str.append(to_string(result[i]));
    }
    return str;
}


void fibo(int n){
    for(int i=2; i<=n; i++){
        fib[i] = sum(fib[i-1], fib[i-2]);
    }
}

bool bigger(string a, string b){
    if(a.size()>b.size()){
        return false;
    }
    else if(a.size() < b.size()){
        return true;
    }
    else{
        for(int i=0; i<a.size(); i++){
            if(a[i] > b[i]){
                return false;
            }
            else if(b[i] > a[i]){
                return true;
            }
        }
        return true;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    fibo(1000);
    
    while(1){
        string a, b;
        cin >> a >> b;
        if(a=="0"&&b=="0") break;
        int count=0;
        
        for(int i=2; i<1000; i++){
            if(bigger(a, fib[i]) && bigger(fib[i],b)){
                count++;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}