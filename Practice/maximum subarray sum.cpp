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

    int n;
    cin>>n;
    int arr[n];
    f(n){
        cin>>arr[i];
    }

    int currSum=0;
    int maxSum=INT_MIN;

    f(n){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }

    cout<<maxSum<<endl;


    return 0;
}

