// Reverse Of the array 
#include <iostream>
using namespace std;
void reversearrt(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while (start<end)
    {
        swap(arr[start], arr[end]);
        start = start + 1;
        end = end - 1;
    }
   
}
int main()
{
    int arr[] = { 10,20,30,40,50 };
    int n = sizeof(arr) / sizeof(n);
    reversearrt(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}


