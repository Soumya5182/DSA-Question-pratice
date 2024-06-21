// laaargest element in vector.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = { 1,4,3,8,2,0 };
    int n = arr.size();
    int max = arr[0];
       for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
       cout << max;
}

