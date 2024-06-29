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
    vector<intl>v(n),v2(n);
    f(n){
        cin>>v[i];
    }
    f(n){
        cin>>v2[i];
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int flag=0;
    f(n){
        if(v[i]!=v2[i]){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }

    if(flag==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}

