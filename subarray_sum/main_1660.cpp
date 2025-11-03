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

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int count = 0;

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = i; j <= n; j++)
        {
            if (arr[j] - arr[i - 1] == x)
                count++;
        }
    }

    cout << count << endl;

    return 0;
}
