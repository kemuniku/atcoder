#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool b = true;
    for(int i = 1; i<=50000;i++){
        int mul = i*1.08;
        if(mul == n){
            cout << i << endl;
            b = false;
            break;
        }
    }
    if(b){
        cout << ":(" << endl;
    }
}