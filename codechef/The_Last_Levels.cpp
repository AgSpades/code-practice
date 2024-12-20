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
    int x,y,z;
    cin>>x>>y>>z;
    int brk_time=0;
    if(x%3==0) brk_time=(x/3)-1;
    else brk_time=x/3;

    if(x<=3)cout<<x*y<<'\n';
    else cout<<x*y+z*brk_time<<'\n';
    
}

int main()
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
