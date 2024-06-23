#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)

int main()
{
    
    op;
    vector<int>v,v2;
    for(int i=0;i<3;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    v2=v;
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<v2[i]<<endl;
    }

    return 0;
}
