#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
	char str[20], *ptr;
	//string input by user
	cout << "Input about 10 characters of string\n";
	cin >> str;
	ptr=str;

	//pattern output

	for(int i=0;i<10;i++)
	{
		ptr=&str[i];
		cout<<p<<endl;
	}

	return (0);
}