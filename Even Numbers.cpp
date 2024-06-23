#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)

int main()
{
    op;
    ll int n;
    cin>>n;
    if(n<2){
        cout<<"-1"<<endl;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<endl;
        }
    }


    return 0;
}

