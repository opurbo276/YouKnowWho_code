#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)
#define endl '\n'

int main()
{
    op;
    double a,b;
    cin>>a>>b;
    double c=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(c)<<endl;
    return 0;
}

