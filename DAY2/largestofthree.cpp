#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<x<<" is larger";

    }
    else if(y>x && y>z)
    {
        cout<<y<<" is larger";
    }
    else if(z>x && z>y)
    {
        cout<<z<<" is larger";
    }
    return 0;
}