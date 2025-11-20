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

const int mx = 1e5 + 123;
ll sum[mx];
ll cnt[mx]{0};

int main()
{
    int s = 0;
  
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        memset(cnt, 0, sizeof(cnt));
        int n = 0, m = 0;
        cin >> n >> m;
        for (auto j = 1; j <= n; j++)
        {
            cin >> sum[j];
            sum[j] = (sum[j] + sum[j - 1]) % m;
        }

        ll ans = 0;
        cnt[0] = 1;
  
        for (auto j = 1; j <= n; j++)
        {
            ll targetValue = sum[j];
            ans += cnt[targetValue];
            cnt[sum[j]]++;
            
        }
        cout << ans << endl;
    }

    return 0;
}
