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
    double x,y;
    cin>>x>>y;
    if(x>0&&y>0){
        cout<<"Q1"<<endl;
    }
    else if(x<0&&y>0){
        cout<<"Q2"<<endl;
    }
    else if(x<0&&y<0){
        cout<<"Q3"<<endl;
    }
    else if(x>0&&y<0){
        cout<<"Q4"<<endl;
    }

    else if(x==0&&y==0){
        cout<<"Origem"<<endl;
    }
    else if(x==0&&(y>0||y<0)){
        cout<<"Eixo Y"<<endl;
    }
    else if(y==0&&(x>0||x<0)){
        cout<<"Eixo X"<<endl;
    }


    return 0;
}
