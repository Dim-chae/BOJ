#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++)
            cout << '*';
        for (int j = (N - i) * 2; j > 0; j--)
            cout << ' ';
        for (int j = 0; j < i; j++)
            cout << '*';
    cout << '\n';
    }
    for (int i = 1; i < N; i++) {
        for (int j = N - i; j > 0; j--)
            cout << '*';
        for (int j = 0; j < 2 * i; j++)
            cout << ' ';
        for (int j = N - i; j > 0; j--)
            cout << '*';
    cout << '\n';
    }
}