#include <bits/stdc++.h>
using namespace std;
int prime(int x)
{
    int found=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
           
            found=1;
            break;
        }
        


    }
    if(found==1)
    {
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    
    return 0;
}
int main()
{
    int x;
    cin>>x;
    prime(x);
    return 0;
}