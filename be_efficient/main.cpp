///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

// https://lightoj.com/problem/be-efficient

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

int main()
{
    int s = 0;
  
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        vector<ll> sum(n + 1);
        for (auto j = 1; j <= n; j++)
        {
            cin >> sum[j];
            sum[j] = (sum[j] + sum[j - 1]) % m;
        }

        ll ans = 0;
        map<ll, int> countMap;
        countMap[0]++;
  
        for (auto j = 1; j <= n; j++)
        {
            ll targetValue = sum[j];
            ans += countMap[targetValue];
            countMap[sum[j]]++;
            
        }
        cout << ans << endl;
    }

    return 0;
}
