// sum of the largest sub array using the kadense algorith 
//
#include <iostream>
using namespace std;
int kadensealgo(int arr[], int n)
{
	int currentsum = 0;
	int largestsum = 0;
	for (int i = 0; i < n; i++)
	{
		currentsum = currentsum + arr[i];
		if (currentsum < 0)
		{
			currentsum = 0;
		}
		largestsum = max(largestsum, currentsum);
	}
	return largestsum;
}
int main()
{
	int arr[] = { 2,1,3,2,3,1,32,3 };
	int n = sizeof(arr) / sizeof(int);
	int result=kadensealgo(arr, n);
	cout << result;
}


