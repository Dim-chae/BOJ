#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++)
            cout << ' ';
        for (int j = 2 * (N - i) - 1; j > 0; j--)
            cout << '*';

        cout << '\n';
    }
}