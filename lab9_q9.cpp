
//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise

#include <iostream>
using namespace std;
bool contains(char* k, char c)
{
bool x=false;int i=0;
while(*(k+i)!='\0')
{
    if(*(k+i)==c)
        x=true;
    i++;
}
    return x;

}
int main()
{
    cout<<contains("Dwaipayan",'p')<<endl;

}