//to print the size of all kinds of variables of predefined datatypes as well as their respective pointers
#include <iostream>
using namespace std;
int main()
{
    
 int a,*a1;
 long b,*b1;
 float c,*c1;
 double d,*d1;
 char e,*e1;
 bool f,*f1;
  //output
 cout<<"The size of int variable = "<<sizeof(a)<<"  and corresponding pointer = "<<sizeof(a1)<<endl;
 cout<<"The size of long variable = "<<sizeof(b)<<" and corresponding pointer =  "<<sizeof(b1)<<endl;
 cout<<"The size of float variable = "<<sizeof(c)<<" and corresponding pointer =  "<<sizeof(c1)<<endl;
 cout<<"The size of double variable = "<<sizeof(d)<<"  and corresponding pointer = "<<sizeof(d1)<<endl;
 cout<<"The size of char variable = "<<sizeof(e)<<" and corresponding pointer =  "<<sizeof(e1)<<endl;
 cout<<"The size of bool variable = "<<sizeof(f)<<"  and corresponding pointer = "<<sizeof(f1)<<endl;

 return 0;
}