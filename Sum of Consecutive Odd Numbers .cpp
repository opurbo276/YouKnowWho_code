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
        ll int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        ll int sum=0;
        for(int i=a+1;i<b;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    

    return 0;
}

