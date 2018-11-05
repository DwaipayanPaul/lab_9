/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char s[10] = "abcde";
    char* cptr;
    cptr=s+5;
    for(int i=4;i>=0;i--)
    {
        cptr=s+i;
        cout<<*cptr;
    }
    
}
