
//1//Verufy this point for check the max number of sub array
//#include <iostream>
//using namespace std;
//int largenumber(int arr[], int n)
//{
//    int largest_sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j < n; j++)
//        {
//            int sub_array_sum = 0;
//            for (int k = i; k <= j; k++)
//            {
//                sub_array_sum = sub_array_sum + arr[i];
//            }
//            largest_sum = max(largest_sum, sub_array_sum);
//        }
//    }
//    return  largest_sum;
//}
//int main()
//{
//    int arr[] = { 5,0,-1,0,1,2,-1 };
//    int n = sizeof(arr) / sizeof(n);
//    int x=largenumber(arr, n);
//    cout << x;
//}

//2//Another process of the find the max number of the sub array 
#include <iostream>
using namespace std;
int maxsubarray(int arr[], int n)
{
	int current_sum = 0;
	int max_sum = 0;
	for (int i = 0; i < n; i++) 
	{
		current_sum = current_sum + arr[i];
		if (current_sum > max_sum)
		{
			max_sum = current_sum;
		}
		if (current_sum < 0)
		{
			current_sum = 0;
		}
	}
	return max_sum;
}
int main()
{
	int arr[] = {5,0,-1,0,1,2,-1};
	int n = sizeof(arr) / sizeof(int);
	int result=maxsubarray(arr, n);
	cout << result;
}
