//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.

#include <iostream>
using namespace std;

void revString(char* ptr)
{
char k;
int c=0;
while (*(ptr+c)!='\0')
    c++;
for(int i=c-1,j=0;true;i--,j++)
{
    if(i==j||i==(j-1))
        break;
    k=*(ptr+i);
    *(ptr+i)=*(ptr+j);
    *(ptr+j)=k;
}

}


int main()
{
  char s[10] = "abcde";
  // call the function
  revString(s);  
  cout<<s<<endl;
  return 0;
}