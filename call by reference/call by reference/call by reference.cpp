//1// call by reference are used at here  without using the pointer.

//#include <iostream>
//using namespace std;
//void printthenewarrary(int arr[])
//{
//	int n = sizeof (arr) / sizeof(int);
//	for (int i = 0; i <= n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	int arr[] = {10,32,11,31,31,1131};
//	int n;
//	n = sizeof(arr) / sizeof(int);
//	cout << "in main size of the array is" << sizeof(arr);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	printthenewarrary(arr);
//}



//2//call by reference using the pointer inside the function.
#include<iostream>
using namespace std;
void printthenewarrary(int * arr ,int n)
{
	cout<< "in main size of the array in function" << sizeof(arr) << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

}
int main()
{
	int arr[] = { 10,67,52,56,66 };
	int n;
	n = sizeof(arr) / sizeof(int);
	cout << "in main size of the array is" << sizeof(arr)<<endl;
	for ( int i = 0; i < n; i++)
	{
		cout << arr[i]<<endl;
	}
	printthenewarrary(arr,n);

}
