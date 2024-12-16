/*Om Namo Narayana~*/
#include <bits/stdc++.h>
using namespace std;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pb push_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (auto &ch1 : s1)
    {
        ch1 = toupper(ch1);
    }
    for (auto &ch2 : s2)
    {
        ch2 = toupper(ch2);
    }
    int flag = 0;
    for (int i = 0; s1[i]; i++)
    {
        if (s1[i] < s2[i])
        {
            flag = -1;
            break;
        }
        else if (s1[i] > s2[i])
        {
            flag = 1;
            break;
        }
    }
    cout << flag << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}
