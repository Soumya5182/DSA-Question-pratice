
//finding the lower trigonal matrix using row matrix 

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #pragma warning(disable:4996) 
//struct matrix {
//    int *A;
//    int n;
//};
//
//void set(struct matrix* m, int i, int j, int x) {
//    if (i >= j) {
//        m->A[i * (i - 1) / 2 + j - 1] = x;
//    }
//}
//
//int get(struct matrix m, int i, int j) {
//    if (i >= j)
//        return m.A[i * (i - 1) / 2 + j - 1];
//    else
//        return 0;
//}
//
//void display(struct matrix m)
//{
//    int i, j;
//    for (i = 1; i <= m.n; i++) {
//        for (j = 1; j <= m.n; j++) {
//            if (i >= j)
//                printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);
//            else
//                printf("0 ");
//        }
//        printf("\n");
//    }
//}
//
// int main() 
// {
//    struct matrix m;
//    int i, j, x;
//    printf("Enter the dimension: ");
//    scanf_s("%d", &m.n);
//    m.A =(int *)malloc((m.n*(m.n - 1) / 2) * sizeof(int));
//    printf("Enter the elements:\n");
//    for (i = 1; i <= m.n; i++) {
//        for (j = 1; j <= m.n; j++) 
//        {
//            scanf_s("%d", &x);
//            set(&m, i, j, x);
//        }
//    }
//    printf_s("\n\n");
//    display(m);
//    free(m.A); // Free dynamically allocated memory
//    return 0;
//  }

//2//row matrix lower trangular matrix using c++ using the class 
#include<iostream>
using namespace std;
class lowertri 
{
private:
	int *A;
	int n;
public:
	lowertri()
	{
		n = 2;
		A = new int[2 * (2 + 1) / 2];
	}
	lowertri(int n)
	{
		this->n = n;
		A = new int[2 * (2 + 1) / 2];
	}
	~lowertri()
	{
		delete[]A;
	}
	void set(int i, int j, int x);
	int get(int i, int j);
	void display();
	int GetDimension()
	{
		return n;
	}
};
void lowertri::set(int i, int j, int x)
{
	if (i >= j)
		A[i * (i - 1) / 2 + j - 1]=x;
}
 int lowertri::get(int i, int j)
 {
	 if (i >= j)
		 return A[i * (i - 1) / 2 + j - 1];
	 return 0;
 }
 void lowertri::display()
 {
	 for (int i = 0; i <= n; i++)
	 {
		 for (int j = 0; j <= n; j++)
		 {
			 if (i >= j)
				 cout << A[i * (i - 1) / 2 + j - 1] << " ";
			 else
				 cout << "0";
		 }
		 cout << endl;
	 }
 }
 int main()
 {
	 int d;
	 cout << "enter the dimension";
	 cin >> d;
	 lowertri em(d);
	 int x;
	 cout << "enetr all element";
	 for (int i = 1; i <= d; i++) 
	 {
		 for (int j = 1; j <= d; j++)
		 {
			 cin >> x;
		 }
	 }
	 em.display();
	 return 0;
 }







