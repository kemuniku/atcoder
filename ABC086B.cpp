#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B,n,m;
    cin >> A >> B;
    if(B==100){
        n = A*1000+B;
    }else if(B>=10){
        n = A*100 + B;
    }else{
        n = A*10 + B;
    }
    m = sqrt(n);
    bool b = false;
    for(int i = 1;i < m+1;i++){
        if(i*i == n){
            b = true;
        }
    }
    if(b){
        cout << "Yes";
    }else{
        cout << "No";
    }
}