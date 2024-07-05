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

    test
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n>10){
            int a=n-2;
            cout<<s[0]<<a<<s[n-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }

    return 0;
}
