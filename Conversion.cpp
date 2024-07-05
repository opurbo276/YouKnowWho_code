#include <bits/stdc++.h>
using namespace std;
#define intl long long int
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)
#define endl '\n'
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    op;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            s[i]=' ';
        }
        else if (islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
        else if (isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
}
