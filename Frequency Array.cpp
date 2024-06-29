#include <bits/stdc++.h>
using namespace std;
#define intl long long int
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)
#define endl '\n'

int main()
{
    op;
    intl n, m;
    cin >> n >> m;
    vector<intl> v(n);
    vector<intl>v2(m+1);
    for (intl i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (intl i = 0; i <n; i++)
    {
        if(v[i]<=m){
            v2[v[i]]+=1;
        }
    }

    for(int i=1;i<=m;i++){
        cout<<v2[i]<<endl;
    }

    return 0;
}
