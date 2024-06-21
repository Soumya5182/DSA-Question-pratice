// Quick sort by anshu.cpp 
#include <iostream>
using namespace std;
int partition(int arr[], int l, int h);
void swap(int arr[], int i, int j);
//swap function using this 

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr, i, j);
        }
    }
    swap(arr, j, l);  //doubt on this point
    return j;
}
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// The Quicksort function Implement
void quicksort(int arr[], int l, int h)
{
    // when low is less than high
    if (l < h)  //(L=low, h=high)
    {
        // pi is the partition return index of pivot
        int pv = partition(arr, l, h);
        quicksort(arr, 1, pv - 1);
        quicksort(arr, pv + 1, h);

    }
}
int main()
{
    int arr[] = { 1,5,6,2 };
    int n = sizeof(arr) / sizeof(n);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}


