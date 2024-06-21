// function2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int f(int n)
{
    // Stop condition
    if (n == 0 || n == 1)
        return 1;

    // Recursive condition
    else
        return n + f(n - 1);
    cout << n*f(n);
}   

// Driver code
int main()
{
    int n = 5;
    cout<< "factorial of " << n << " is: " << f(n);
    return 0;
}
