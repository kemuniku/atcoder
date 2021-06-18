#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> B;
    for (int i = 0; i < m; i++) {
        int b;
		cin >> b;
		B.push_back(b);
	}
    int answer = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            sum += a * B[j];
        }
        if(sum + c > 0){
            answer += 1;
        }
    }
    cout << answer;
}