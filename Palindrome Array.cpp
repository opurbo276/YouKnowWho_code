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

    intl n;
    cin>>n;
    vector<int>v(n),v2(n);
    f(n){
        cin>>v[i];
    }
    v2=v;

    reverse(v2.begin(),v2.end());

    if(v2==v){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}

