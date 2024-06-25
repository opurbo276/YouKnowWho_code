#include <bits/stdc++.h>
using namespace std;
#define intl long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)
#define endl '\n'

int main()
{
    op;
    intl t;
    cin>>t;
    intl sum=0;
    while (t--)
    {
        intl n;
        cin>>n;
        sum+=n;
    }

    cout<<abs(sum)<<endl;
    


    return 0;
}

