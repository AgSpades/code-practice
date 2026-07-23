/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
template version: 0.1.4
*/
#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

// /*
// Indexed Set
// A set which can be indexed. Methods include:
// - find_by_order(int pos) : returns an iterator to element at given position. note: *iterator give the element.
// - order_of_key(int el): returns the position of a given element in set, element does not appear in the set, we get the position that the element would have in the set.
// */
// template <typename T>
// using indexed_set = tree<T, null_type, less<T>, rb_tree_tag,
//                          tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;
const int INF = 1e18;

inline void solve()
{
    int x;
    cin >> x;
    auto a = to_string(x);
    auto b = a;
    reverse(a.begin(), a.end());
    puts(a == b ? "wins" : "loses");
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
