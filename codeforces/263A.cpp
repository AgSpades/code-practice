/*Yaare Yaare Daaze...*/
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
    int arr[5][5];
    int x = 0, y = 0;
    FOR(i, 0, 5)
    {
        FOR(j, 0, 5)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d",abs(x-2)+abs(y-2));
}

int main()
{
    fastio;
    solve();
    return 0;
}
