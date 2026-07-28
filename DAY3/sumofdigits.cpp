#include <bits/stdc++.h>
using namespace std;
int sumofdigits(int x)
{
    int sum=0,digit;
    while(x!=0)
    {
    digit=x%10;
    sum=sum+digit;
    x=x/10;
    };
    return sum;
}
int main()
{
    int x;
    cin>>x;
    int res=sumofdigits(x);
    cout<<res;
    return 0;
}