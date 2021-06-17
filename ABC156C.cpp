#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X.at(i);
    }
    sort(X.begin(), X.end());
    vector<int> strength_sum;
    for (int i = X[0]; i <= X.back(); i++) {
        int strength = 0;
        for (unsigned int j = 0; j < X.size(); j++) {
            strength = strength + pow(X[j] - i,2);
        }
        strength_sum.push_back(strength);
    }
    int min = *min_element(strength_sum.begin(), strength_sum.end());
    cout << min;
    return 0;
}