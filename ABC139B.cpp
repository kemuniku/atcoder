#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int i = 1;
    int j = 0;
    while(i < b){
        i = i + a - 1;
        j++;
    }
    cout << j;
    return 0;
}