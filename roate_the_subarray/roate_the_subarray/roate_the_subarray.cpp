// roate_the_subarray.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
void rotate_the_array(int arr[], int n, int rotate)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9 };
	int n = sizeof(arr) / sizeof(int);
	int rotate = 2;
	rotate_the_array(arr, n, rotate);
}

