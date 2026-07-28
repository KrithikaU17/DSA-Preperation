#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int digit,rev=0;
    while(x!=0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    return rev;
}
int main()
{
    int x;
    cin>>x;
    int res=reverse(x);
    cout<<res;
    return 0;
    
}