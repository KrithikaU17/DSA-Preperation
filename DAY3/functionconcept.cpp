#include <bits/stdc++.h>
using namespace std;

// 1. Function with no arguments and no return value
void greet()
{
    cout << "Hello!" << endl;
}

// 2. Function with arguments and no return value
void printSum(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

// 3. Function with arguments and return value
int add(int a, int b)
{
    return a + b;
}

// 4. Function with no arguments but return value
int getNumber()
{
    return 10;
}

int main()
{
    greet();

    printSum(5, 3);

    int result = add(10, 20);
    cout << "Result = " << result << endl;

    int x = getNumber();
    cout << "Number = " << x << endl;

    return 0;
}