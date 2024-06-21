// call by reference are used at here 

#include <iostream>
using namespace std;

int main()
{
	int arr[100] = { 10,32,11,31,31,1131 };
	int n;
	n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

}
