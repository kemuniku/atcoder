#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,n,lcm,k;
    cin >> a >> b >> n;
    int r = a % b;
    int i = a;
    int j = b;
    while(r != 0){
        i = j;
        j = r;
        r = i % j;
    }
    lcm = a*b/j;
    for (k = 1; n > lcm*k; k++){}
    cout << lcm*k << endl;
}