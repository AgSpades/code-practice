/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
template version: 0.1.3
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

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
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

/*
Indexed Set
A set which can be indexed. Methods include:
- find_by_order(int pos) : returns an iterator to element at given position. note: *iterator give the element.
- order_of_key(int el): returns the position of a given element in set, element does not appear in the set, we get the position that the element would have in the set.
*/
template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    FOR(i, 0, n) { cin >> arr[i]; }
    int s = *max_element(all(arr));
    int ans = 0;
    FOR(i, 0, n)
    {
        ans += abs(arr[i] - s);
    }
    cout << ans << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
