#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

   int n;
   vector<int> v;

   cin >> n;

   for (int i = 0; i < n; i++) {
       int tmp;
       cin >> tmp;
       v.push_back(tmp);
   }

   sort(v.begin(), v.end());

   for (int i = 0; i < n; i++)
       cout << v[i] << '\n';
}