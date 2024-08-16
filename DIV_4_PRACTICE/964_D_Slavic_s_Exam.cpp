// PROBLEM LINK : https://codeforces.com/contest/1999/problem/D
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
    string s, t;
    cin >> s >> t;
    // base cases
    int count_qstn = 0;
    for (const auto el : s)
        if (el == '?')
            count_qstn++;

    if (count_qstn == s.size())
    {
        cout << "YES\n";
        string ans = t;
        int count = s.size() - t.size();
        for (int i = 0; i < count; i++)
            ans.push_back('a');
        cout << ans << "\n";
        return;
    }
    int i = 0; // t pointer
    string ans = "";
    for (int j = 0; j < s.size(); j++)
    {
        if (i < t.size() and s[j] == t[i])
        {
            i++;
            ans.push_back(s[j]);
        }
        else if (s[j] == '?')
        {
            if (i < t.size())
                ans.push_back(t[i]);
            else
                ans.push_back('a');
            i++;
        }
        else
        {
            ans.push_back(s[j]);
            continue;
        }
    }

    // cout<<i<<"\n";
    if (i >= t.size())
    {
        cout << "YES\n";
        cout << ans << "\n";
    }
    else
    {
        cout << "NO\n";
    }
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