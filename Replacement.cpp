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
    f(n){
        cin>>arr[i];
        if(arr[i]>0){arr[i]=1;}
        else if(arr[i]<0){arr[i]=2;}
    }

    f(n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}

