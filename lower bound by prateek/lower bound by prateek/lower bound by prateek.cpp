
// lower bound by prateek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int lower_bound(int arr[], int n, int a)
{
	int start = 0;
	int end = n - 1;
	int ans = -1;
	while (start<end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] <= a)
		{
			ans = arr[mid];
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return ans;
}

int main()
{
	int a;
	int arr[] = { -1,-1,2,3,5 };
	int n = sizeof(arr) / sizeof(int);
	cout << "enter the key of the value"<<endl;
	cin >> a;
	cout << endl;
	int result=lower_bound(arr,n,a);
	cout << result;
}


