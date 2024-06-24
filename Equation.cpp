#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)
#define endl '\n'

long long int power(int x,int n){
    ll int sum1=1;
    for(int i=1;i<=n;i++){
        sum1*=x;
    }
    return sum1;
}

void fun(int x,int n){
    ll int sum=0;
    for(int i=2;i<=n;i+=2){
        sum+=(power(x,i));
    }
    cout<<sum<<endl;
}

int main()
{
    op;
    int x, n;
    cin >> x >> n;
    if(n%2!=0){
        n=n-1;
    }
    fun(x,n);
    return 0;
}