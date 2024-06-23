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

int countBinaryOnes(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n % 2;
        n /= 2;
    }
    return count;
}

int onesToDecimal(int count)
{
    int result = 0;
    for (int i = 0; i < count; ++i)
    {
        result += pow(2, i);
    }
    return result;
}

int main()
{
    op;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int onesCount = countBinaryOnes(n);
        int result = onesToDecimal(onesCount);
        cout << result << endl;
    }
    return 0;
}
