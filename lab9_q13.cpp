//13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 


#include <iostream>

using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    cout<<"Print using the normal index method"<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<" "<<endl;
    cout<<"Print array using pointer method"<<endl;
    for(int i=0;i<=9;i++)
    {
        p=a+i;
        cout<<*p<<endl;
    }
    
}
    