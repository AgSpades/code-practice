/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
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

void numberofWays(int &ans,
                  int row,
                  vector<string> &board,
                  vector<bool> &colOccupied,
                  vector<bool> &diPri,
                  vector<bool> &diSec)
{
    if (row == 8)
    {
        ans++;
        return;
    }
    for (int col = 0; col < 8; col++)
    {
        if (board[row][col] == '*' || colOccupied[col] || diPri[row - col + 7] || diSec[row + col])
        {
            continue;
        }
        colOccupied[col] = diPri[row - col + 7] = diSec[row + col] = true;
        numberofWays(ans, row + 1, board, colOccupied, diPri, diSec);
        colOccupied[col] = diPri[row - col + 7] = diSec[row + col] = false;
    }
}
void solve()
{
    vector<string> board(8);
    for (auto &line : board)
    {
        getline(cin, line);
    }
    vector<bool> colOccupied(8, false), diPri(15, false), diSec(15, false);
    int ans = 0;
    numberofWays(ans, 0, board, colOccupied, diPri, diSec);
    cout << ans << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}