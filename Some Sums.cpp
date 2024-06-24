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

bool fun(int i,int a,int b){
    string s=to_string(i);
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    if(sum>=a and sum<=b){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    op;
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (fun(i,a,b))
        {
            sum += i;
        }
    }

    cout<<sum<<endl;

    return 0;
}
