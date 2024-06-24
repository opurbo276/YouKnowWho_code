#include <bits/stdc++.h>
using namespace std;
#define op ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(n) for(int i=0;i<n;i++)
#define endl '\n'
#define int1 double

void fun(int1 a,int1 b,int1 c,int1 d){
    int1 sum1=b*log(a);
    int1 sum2=d*log(c);
    cout<<(sum1>sum2?"YES":"NO")<<endl;
}

int main()
{
    op;

    int1 a,b,c,d;
    cin>>a>>b>>c>>d;
    fun(a,b,c,d);


    return 0;
}

