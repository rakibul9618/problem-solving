///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

// https://cses.fi/problemset/task/1650/

#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main () {
    int n, q;
    cin >> n >> q;

    vector<int> sum(n+1);

    for (size_t i = 1; i <=n; i++)
    {
        int temp = 0;
        cin >> temp;
        sum[i] = sum[i-1] ^ temp;
    }
    
    for (size_t i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans = sum[b] ^ sum[a-1];
        cout << ans << endl; 
    }
    
    return 0;
}
