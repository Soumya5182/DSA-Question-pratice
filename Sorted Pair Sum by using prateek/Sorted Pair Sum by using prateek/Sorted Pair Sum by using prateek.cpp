// Sorted Pair Sum by using prateek find the max sum of the cureent sum.

#include <iostream>
using namespace std;
pair<int,int> sorted_pair_array(int arr[], int n, int a)
{
	int start = 0;
	int end = n - 1;
	int diff = INT_MAX;
	int leftindex, rightindex;
	while (start<end)
	{
		int cs = arr[start] + arr[end];
		//update the diiffrent at here.
		if (abs(cs - a) < diff)
		{
			leftindex = start;
			rightindex = end;
			diff = abs(cs - a);

		}
		if (cs > a)
		{
			end--;
		}
		else
		{
			start++;
		}
	}
	return {arr[leftindex],arr[rightindex]};
	
}
int main()
{
	int arr[] = { 10,22,28,29,30,40 };
	int n = sizeof(arr) / sizeof(int);
	int a;
	cout << "Enter the key of the value what you want to print" << endl;
	cin >> a;
	pair<int, int> result =sorted_pair_array(arr, n, a);
	cout << result.first << ","<< result.second;
}




