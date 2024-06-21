//binary search by written 
#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[] = { 10,23,5,24,21,34,2 };
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;
    int index = binarysearch(arr, n, key);
    if (index != -1)
    {
        cout << key << "is present at index" << index << endl;
    }
    else
    {
        cout << "this value are not available";
    }
} 
