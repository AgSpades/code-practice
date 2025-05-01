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

inline void solve()
{
    int t,l,w,h;
    scanf("%d",&t);
    int n=1;
    while(t--){
        scanf("%d %d %d",&l,&w,&h);
        printf((l<=20)&&(w<=20)&&(h<=20)?"Case %d: good\n":"Case %d: bad\n",n++);
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
