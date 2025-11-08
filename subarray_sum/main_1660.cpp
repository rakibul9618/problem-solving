///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

// https://cses.fi/problemset/task/1660/

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
    int n = 0, x = 0;
    cin >> n >> x;

    vector<ll> sum(n + 1);

    for (auto i = 1; i <= n; i++)
    {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }

    ll count = 0;

    // for (size_t i = 1; i <= n; i++)
    // {
    //     for (size_t j = i; j <= n; j++)
    //     {
    //         if (sum[j] - sum[i - 1] == x)
    //             count++;
    //     }
    // }


    // Optimized Approach

    map<ll, int> countMap = {
        {0, 1}
    };

    for(auto i = 1; i <= n; i++)
    {
        ll targetValue = sum[i] - x;
        count += countMap[targetValue];
        countMap[sum[i]]++;
    }

    cout << count << endl;


    return 0;
}
