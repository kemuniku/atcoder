#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,price;
    cin >> a >> b;
    if(a <=5){
        price = 0;
    }else if(a <= 12){
        price = b/2;
    }else{
        price = b;
    }
    cout << price << endl;
}