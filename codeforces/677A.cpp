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
    int n, hmax,c=0;
    cin>>n>>hmax;
    int arr[n];
    FOR(i,0,n){
        cin>>arr[i];
    }
    FOR(i,0,n){
        arr[i]>hmax?c+=2:c++;
    }
    cout<<c<<'\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
