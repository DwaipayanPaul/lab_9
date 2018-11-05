#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

	char str[20], *ptr;
	
	//string input by user
	
	cout << "Input about 10 characters of string\n";
	cin >> str;

	ptr=str;
	
	//printing the pattern
	
	for(int i=9;i>=0;i--)
	{
	ptr=&str[i];
	cout<<ptr<<endl;
	}
	return (0);

}