#include <bits/stdc++.h>
using namespace std;
int maxoftwo(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else if(x==y)
    {
        cout<<"both are equal";
        return 0;
    }
    else
    {
        return y;
    }
}
int main()
{
    int x,y,res;
    cin>>x>>y;
    res=maxoftwo(x,y);
    cout<<res;
    return 0;
}
