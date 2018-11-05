//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

#include <iostream>
using namespace std;

double* maximum(double* a,int size)
{
double* h=a;
for(int i=0;i<size;i++)
{
if(*(a+i)>=*h)
h=a+i;
}
if(size==0)
return NULL;
else return h;
}
int main()
{
double a[]={1,2,3,4,5};
cout<<*maximum(a,5)<<endl;
return 0;


}