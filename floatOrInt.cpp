#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)

int main()
{
    op;
    float n;
    cin >> n;
    int int_part = n;
    float float_part = n - int_part;
    if (float_part == 0)
    {
        cout << "int " << int_part << endl;
    }
    else
    {
        cout << "float "<<int_part<<" "<<fixed<<setprecision(3)<<float_part<<endl;
    }

    return 0;
}
