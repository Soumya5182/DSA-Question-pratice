// Insertn sort by soumya.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
void insert(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = { 10,5,6,1,11 };
    int n = sizeof(arr) / sizeof(int);
    insert(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}


