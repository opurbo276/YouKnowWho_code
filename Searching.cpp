#include <bits/stdc++.h>
using namespace std;
#define intl long long int
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)
#define endl '\n'

int main()
{
    op;

    intl n,x;
    cin>>n;
    intl arr[n];
    intl flag=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){flag=i;break;}
    }
    cout<<flag<<endl;


    return 0;
}

