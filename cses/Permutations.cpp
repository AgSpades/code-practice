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

void solve()
{
    int n;
    cin >> n;
    if(n==2||n==3){
        cout << "NO SOLUTION";
        return;
    }
    for(int i=2;i<=n;i+=2){
        cout << i << " ";
    }
    for(int i=1;i<=n;i+=2){
        cout << i << " ";
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
