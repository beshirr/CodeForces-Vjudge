// contest: Codeforces Round 952 (Div. 4) https://codeforces.com/contest/1985
// problem: B - Maximum Multiple Sum
// time(ms): 30
// memory(kb): 0

#include <bits/stdc++.h>

using namespace std;

#define INPUT input();
#define endl '\n'

void input(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int maximumMultipleSum(int n) {
    int k = 2, maximum = INT_MIN, x;
    while (k <= n) {
        int sum = 0;
        for (int i = 1; i <= n / k; i++){
            sum += i * k;
            if (sum > maximum) {
                maximum = sum;
                x = k;
            }
        }
        k++;
    }

    return x;
}


int main(){
    INPUT
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << maximumMultipleSum(n) << endl;
    }

    return 0;
}
