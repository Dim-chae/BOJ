#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j > 0; j--)
            cout << ' ';
        for (int j = 1; j <= i * 2 - 1; j++)
            cout << '*';
        cout << '\n';
    }
}