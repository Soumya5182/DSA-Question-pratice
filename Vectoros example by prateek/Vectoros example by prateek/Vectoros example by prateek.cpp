// Vectoros example by prateek
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = { 1,2,3,4,5,6 };
    //6//Fill the constructor(insert the 10 array element and input the value are all are the 7
    vector<int> arr(10, 7);
    //5//pop back of the array 
    arr.pop_back();
    //4//puch back of the array
     arr.push_back(10);
    //3//print all the elemnt of the array
     for (int i = 0; i < arr.size(); i++)
     {
         cout << arr[i] << endl;
     }
    //1//size of the array 
    cout << arr.size() << endl;
    //2//check the capacity of the vector
    cout << arr.capacity() << endl;

}



