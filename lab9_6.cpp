//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  

#include <iostream>
using namespace std;
int countEven(int* a ,int b)
{
int c=0;
for(int i=0;i<b;i++)
{
if((*(a+i))%2==0)
c++;
}
return c;
}

int main(){
int a[]={11,12,14,13,15};
cout<<countEven(a,5)<<endl;

}