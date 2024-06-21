// couning sort by apna college

#include <iostream>
using namespace std;

void count_arrary(int arr[], int n) 
{

    int high = arr[0];
    for (int i = 0; i < n; i++)
    {
        high = max(high, arr[i]);
    }
    //count of the element 
    int count[10] = { 0 };
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    //here add the count of the previous element
    for (int i = 1; i <= high; i++)
    {
        count[i] += count[i - 1];
    }
    //here count the from last of the element end check that position 
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

}

void main()
{
    int arr[] = { 1,4,3,2,7,1,2 };
    int n = sizeof(arr) / sizeof(int);
    count_arrary(arr, 7);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}

