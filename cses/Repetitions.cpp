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
    string s;
    cin >> s;
    ll ans =1, cnt = 1;
    FOR(i, 1, s.size()){
        if(s[i] == s[i-1]){
            cnt++;
            
        }
        else{
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
}

int main()
{
    fastio;
    solve();
    return 0;
}
