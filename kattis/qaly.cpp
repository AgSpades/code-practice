/*
Jai Bajrangbali!
author: agspades
year of code: 2025
template version: 0.1.1
*/
#include <iostream>
#include <vector>
#include<algorithm>
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
	int n;
	scanf("%d",&n);
	float total=0,q,y;
	while(n--){
		scanf("%f %f",&q,&y);
		total+=q*y;
	}
	printf("%.3f\n",total);
}

int main()
{
    fastio;
	solve();
    return 0;
}