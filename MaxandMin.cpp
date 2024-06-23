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
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=0,mini=0;
    if(a>b){
        maxi=a;
        mini=b;
    }
    else{
        maxi=b;
        mini=a;
    }
    cout<<min(mini,c)<<" "<<max(maxi,c)<<endl;
    

    return 0;
}
