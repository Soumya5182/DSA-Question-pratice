//#include <iostream>
//using namespace std;
//void bubble(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j + 1] < arr[j])
//            {
//                swap(arr, j + 1, j);
//            }
//        }
//    }
//}
//  void swap(int arr[], int i, int j)
//  {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//  }
// int main()
// {
//    int arr[] = { 10,32,43,42,1,4 };
//    int n = sizeof(arr) / sizeof(int);
//    bubble(arr, n);
//    return 0;
// }


//new bubble shot using

#include <iostream>
using namespace std;


void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                // Call swap correctly
                swap(arr, j + 1, j);
            }
        }
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    int arr[] = { 10, 32, 43, 42, 1, 4 };
    int n = sizeof(arr) / sizeof(int);
    bubble(arr, n);

    // Printing sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}