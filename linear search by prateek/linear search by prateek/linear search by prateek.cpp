//linear seaching  algorith 
#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return  i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = { 12,32,13,42,52,11,44,14,53 };
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index= linear_search (arr, n, key);
    if (index!=-1)
    {
        cout << key << "the key index" << index << endl;
    }
    else
    {
        cout << "this key value id not found in index";
    }
}

