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
    int n;
    cin >> n;
    vector<int> v(n);
    int mini=INT_MAX;
    int maxi=0;
    int minindex=0,maxindex=0;

    f(n)
    {
        cin >> v[i];
        if(v[i]>maxi){
            maxi=v[i];
            maxindex=i;
        }
        if(v[i]<mini){
            mini=v[i];
            minindex=i;
        }
    }

    swap(v[minindex],v[maxindex]);

    

    f(n){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
