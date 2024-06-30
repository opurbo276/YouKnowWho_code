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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        f(n){
            cin>>arr[i];
        }

        f(n){
            int maxi=INT_MIN;
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                    maxi=max(maxi,arr[k]);
                }
                cout<<maxi<<" ";
            }
        }
        cout<<endl;
    }

        return 0;
}
