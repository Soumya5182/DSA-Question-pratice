// printing the pair  of the data using the  array 

#include <iostream>
using namespace std;
void pairall(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << x <<"," << y << endl;
        }
    }cout << endl;
}
int main()
{
    int arr[] = { 10,20,30,40,50,60,70 };
    int n = sizeof(arr) / sizeof(int);
     pairall(arr, n);
     return 0;
}


