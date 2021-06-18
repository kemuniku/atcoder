#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,as,bs;
    string s;
    cin >> n >> a >> b >> s;
    as = 0;
    bs = 0;
    for (int i = 0; i < n; i++) {
        string c = s.substr(i,1);
        if(c=="a"){
            if(a+b>as+bs){
                cout << "Yes" << endl;
                as += 1;
            }else{
                cout << "No" << endl;
            }
        }else if(c=="b"){
            if(a+b>as+bs and b > bs){
                cout << "Yes" << endl;
                bs += 1;
            }else{
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }
}