#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)

int main()
{
    op;
    int t;cin>>t;
    while (t--)
    {
        string x;
        cin>>x;
        int n=x.size();
        for(int i=n-1;i>=0;i--){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}

