/*
Jai Bajrangbali!
author: agspades
year of code: 2025
template version: 0.1.1
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    if (!(cin >> n)) return; // Check for EOF or invalid input
    vi arr(n);
    FOR(i, 0, n) {
        if (!(cin >> arr[i])) return; // Check for EOF or invalid input
    }

    // Handle edge case: n = 1 (single element is jolly)
    if (n == 1) {
        cout << "Jolly\n";
        return;
    }

    vi diff;
    FOR(i, 1, n) {
        diff.pb(abs(arr[i] - arr[i - 1]));
    }

    sort(all(diff));
    bool is_jolly = true;
    for (int i = 0; i < diff.size(); ++i) {
        if (diff[i] != i + 1) { 
            is_jolly = false;
            break;
        }
    }

    cout << (is_jolly ? "Jolly\n" : "Not jolly\n");
}

int main() {
    fastio;
    while (cin) { 
        solve();
    }
    return 0;
}