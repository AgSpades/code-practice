/*
Om Namo Narayana~
author: agspades
year of code: 2024
template version: 0.1
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
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n, curr, len;
    cin >> n;
    curr = n + 1;

    while (1)
    {
        string str = to_string(curr);

        unordered_set<char> digs(str.begin(), str.end());

        if(digs.size()==4){
            cout<<curr<<'\n';
            break;
        }
        curr++;
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
