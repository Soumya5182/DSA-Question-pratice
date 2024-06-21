// sub array sum(Prefix sum).cpp : This file contains the 'main' function. Program execution begins and ends there using the prateek nagron .

#include <iostream>
using namespace std;
int sumofsubarry(int arr[], int n)
{
    //prefix sum
    int prefix[100] = {0};
     prefix[0] = arr[0];
     for (int i = 1; i < n; i++)
     {
         prefix[i] = prefix[i - 1] + arr[i];
         //{-2,1,5,4,9,-3,3,4,7}
     }
        //largest sum login 
        int largestsum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int subarraysum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
                largestsum = max(largestsum, subarraysum);
            }
        }
        return largestsum;
}
int main()
{
    
        int arr[] = { -2,3,4,-1,5,-12,6,1,3 };
        int n = sizeof(arr) / sizeof(int);
        cout << sumofsubarry(arr, n);
    
}