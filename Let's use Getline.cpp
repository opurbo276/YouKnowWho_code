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

    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='\\'){
            break;
        }
        else{
            cout<<s[i];
        }
    }
    cout<<endl;
    

    return 0;
}
