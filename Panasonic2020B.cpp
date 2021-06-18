#include <bits/stdc++.h>
using namespace std;
int main() {
    long long H,W;
    cin >> H >> W;
    long long board = H*W;
    if(H == 1 or W == 1){
        cout << 1;
    }else if(board%2 == 0){
        cout << board /2;
    }else{
        board = board /2;
        cout << board + 1;
    }
}