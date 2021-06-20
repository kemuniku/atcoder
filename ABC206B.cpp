#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sum,i;
    cin >> n;
    for(i = 1;sum < n;i++){
        sum += i;
    }
    cout << i-1;
}