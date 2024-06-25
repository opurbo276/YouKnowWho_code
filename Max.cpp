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
    intl arr[n];
    intl max=0;
    f(n){
        cin>>arr[i];
        if(i==0){max=arr[i];}
        else{
            if(max<arr[i])max=arr[i];
        }
    }

    cout<<max<<endl;


    return 0;
}

