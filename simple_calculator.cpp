#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"1.Addition 2.Subtraction 3.multiplication 4.Division";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<x+y;
            break;
        }
        case 2:
        {
            if(x>y)
            {
                cout<<x-y;
            }
            else
            {
                cout<<y-x;
            }
            break;
        }
        case 3:
        {
            cout<<x*y;
            break;
        }
        case 4:
        {
            cout<<x/y;
            break;
        }
    }
    return 0;
}