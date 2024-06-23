#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)

int main()
{
    op;
    int x;cin>>x;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}

