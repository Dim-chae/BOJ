#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}