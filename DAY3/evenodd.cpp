#include <bits/stdc++.h>
using namespace std;
int evenodd(int x)
{
    if(x%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
int main()
{
    int x;
    cin>>x;
    evenodd(x);
    return 0;
}