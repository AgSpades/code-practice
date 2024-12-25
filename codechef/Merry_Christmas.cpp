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
    int X;
    cin >> X;

    vector<int> activities = {1, 2, 4}; 
    int max_activities = 0;

    
    for (int i = 0; i < (1 << activities.size()); ++i)
    { 
        int total_time = 0;
        int count = 0;

        for (int j = 0; j < activities.size(); ++j)
        {
            if (i & (1 << j))
            { 
                total_time += activities[j];
                count++;
            }
        }

        
        if (total_time <= X)
        {
            max_activities = max(max_activities, count);
        }
    }

    cout << max_activities << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
