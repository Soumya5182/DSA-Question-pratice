// selection sort by using the anju bhaiya 
#include <iostream>
using namespace std;
void selection(int arr[], int n);
void swap(int arr[], int i, int j);
void selection(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(arr, min, i);
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
	int arr[] = { 1,3,10,4,5 };
	int n = sizeof(arr) / sizeof(int);	
	selection(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
}


