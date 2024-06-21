
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout << "enter the number of the student mark\n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "you enter the student mark is=\n";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<endl;
    }
}


