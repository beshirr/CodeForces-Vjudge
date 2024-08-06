// contest: Codeforces Round 952 (Div. 4) https://codeforces.com/contest/1985
// problem: A - Creating Words
// time(ms): 15
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

void creatingWords(string a, string b){
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;
}


int main(){
    INPUT
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        creatingWords(a, b);
    }

    return 0;
}
