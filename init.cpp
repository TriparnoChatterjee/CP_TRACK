// PROBLEM LINK :
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
void solve()
{
    cout << "hey\n";
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