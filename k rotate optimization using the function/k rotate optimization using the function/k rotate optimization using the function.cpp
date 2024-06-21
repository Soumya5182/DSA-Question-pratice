// k rotate optimization using the function.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#include <iostream>
//using namespace std;
//int rotatearray(int arr[], int n, int k)
//{
//    k = k % n;
//    reverse(arr.begin(), arr.begin() + n - k);
//    reverse(arr.begin() + n - k, arr.end());
//    reverse(arr.begin(), arr.end());
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8 };
//    int n = sizeof(arr) / sizeof(int);
//    int k = 3;
//    rotatearray(arr, n, k);
//}


//2//This is the another process of using the simple array.
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void rotation_array(int arr[], int n, int k)
{
	k = k % n;
	reverse(arr, 0, n - 1);
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
}

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int n = sizeof(arr) / sizeof(int);
	int k = 2;
	rotation_array(arr, n, k);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];

	}
	return 0;
}

