//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.

#include <iostream>
using namespace std;

int myStrLen(char* k)
{
int i=0;
while(*(k+i)!='\0')
i++;

return i;
}


int main()
{
cout<<myStrLen("DwaipayanPaul")<<endl;
}