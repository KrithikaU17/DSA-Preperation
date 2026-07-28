#include <bits/stdc++.h>
using namespace std;
int maxofthree(int x,int y,int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else{
        return z;
    }
}
int main()
{
    int x,y,z,res;
    cin>>x>>y>>z;
    res=maxofthree(x,y,z);
    cout<<res;
    return 0;

}