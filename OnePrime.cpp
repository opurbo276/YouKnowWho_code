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
    int flag=0;
    for(int i=2;i<x;i++){
        if(x%i==0){cout<<"NO"<<endl;flag++;break;}
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }

    return 0;
}

