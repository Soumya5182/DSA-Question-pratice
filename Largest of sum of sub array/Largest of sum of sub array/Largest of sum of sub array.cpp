// Largest of sum of sub array using the brute force algorith 
#include <iostream>
using namespace std;
int largest_of_the_sum(int arr[], int n)
{
	int large_sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int sum_sub_array = 0;
			for (int k = i; k <= j; k++)
			{
				sum_sub_array = sum_sub_array + arr[k];
			}
			large_sum = max(large_sum, sum_sub_array);
		}
	}
	return large_sum;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int n = sizeof(arr) / sizeof(n);
	int return_value=largest_of_the_sum(arr, n);
	cout << return_value;
}


