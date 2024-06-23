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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s = n - i;
        while (s--)
        {
            cout << " ";
        }
        s=i*2-1;
        while(s--){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)
    {
        int s = n - i;
        while (s--)
        {
            cout << " ";
        }
        s=i*2-1;
        while(s--){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}

