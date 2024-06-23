#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)

int main()
{
    op;
    int n;
    cin>>n;
    int even=0,odd=0,posi=0,nega=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){even++;}
        if(x%2!=0){odd++;}
        if(x>0){posi++;}
        if(x<0){nega++;}
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<posi<<endl<<"Negative: "<<nega<<endl;



    return 0;
}

