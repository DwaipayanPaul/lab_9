#include <iostream>
using namespace std;
int main()
{
	char c[]="Dwaipayan";
	char *p=c;
	cout<<"Print by array index method"<<endl;	
	for(int i=0;i<9;i++)
		cout<<c[i]<<endl;
	cout<<"Print by pointer method"<<endl;
	for(int i=1;i<=9;i++)
		cout<<*(p++)<<endl;
	return 0;

}