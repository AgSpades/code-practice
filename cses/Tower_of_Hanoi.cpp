/*
Jai Bajrangbali!
template_author: agspades
year of code: 2025
template version: 0.1.2
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
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// Binary Exponentian Function
ll binpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void moveDisks(int n, vvi &moves, int s, int d, int a)
{
    if (n == 1)
    {
        moves.pb({s, d});
        return;
    }

    moveDisks(n - 1, moves, s, a, d);
    moves.pb({s, d});
    moveDisks(n - 1, moves, a, d, s);
}

inline void solve()
{
    int n;
    scanf("%d", &n); // why am I doing this? coz I am following the book!
    vvi moves;
    int s = 1, a = 2, d = 3;
    moveDisks(n, moves, s, d, a);
    printf("%d\n", moves.size());
    for (auto move : moves)
    {
        printf("%d %d\n", move[0], move[1]);
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
