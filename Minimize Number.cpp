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
    f(n)
    {
        cin >> v[i];
    }

    int flag = 1;
    int count=0;
    while (flag != 0)
    {
        f(n)
        {
            if (v[i] % 2 == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {   
            count++;
            f(n)
            {
                v[i] = (v[i] / 2);
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
