/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
template version: 0.1.2
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
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main()
{
    fastio;
    int n;
    bool firstCase = true;

    while (scanf("%d", &n) && n != 0)
    {
        if (!firstCase)
            printf("\n");
        firstCase = false;

        bool found = false;

        for (int fghij = 1234; fghij <= 98765 / n; fghij++)
        {
            int abcde = fghij * n;
            int tmp;
            int used = (fghij < 10000);

            tmp = abcde;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }

            tmp = fghij;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }

            if (used == (1 << 10) - 1)
            {
                printf("%05d / %05d = %d\n", abcde, fghij, n);
                found = true;
            }
        }

        if (!found)
        {
            printf("There are no solutions for %d.\n", n);
        }
    }
    
    return 0;
}
