#include <bits/stdc++.h>
using namespace std;
#define intl long long
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
    intl mini=0,index=1;
    f(n){
        cin>>arr[i];
    }
    f(n){
        if(i==0){mini=arr[i];}
        else{
            if(mini>arr[i]){
                mini=arr[i];
                index=i+1;
                
            }
        }
    }

    cout<<mini<<" "<<index<<endl;

    return 0;
}

