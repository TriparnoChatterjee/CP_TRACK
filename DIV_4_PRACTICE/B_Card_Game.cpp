// PROBLEM LINK :https://codeforces.com/contest/1999/problem/B
// AUTHOR : TRIPARNO CHATTERJEE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lli = long long int;
const int N = 1e6 + 1;
vector<bool> isPrime(N, true);
void fillSeive()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int f(int a, int b)
{
    if (a > b)
        return 1;
    else if (a == b)
        return 0;
    else
        return -1;
}
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    if ((f(a, c) + f(b, d))>=1)
        ans++;
    if ((f(a, d) + f(b, c))>=1)
        ans++;
    if ((f(b, c) + f(a, d))>=1)
        ans++;
    if ((f(b, d) + f(a, c))>=1)
        ans++;
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}