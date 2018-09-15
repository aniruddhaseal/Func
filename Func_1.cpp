#include<iostream>
using namespace std;
//taking input
char input()
{
	char a;
	cout<<"Enter a character"<<endl;
	cin>>a;
	return a;
}
//converting to Upper Case
char toUpper(char u)
{
	char c=(char)(((int)u)-32);
	return c;
}
//converting to Lower Case
char toLower(char l)
{
	char c=(char)(((int)l)+32);
	return c;
}
//Driver Function
int main()
{ 	
	//ask user
	char ch=input();
	int n=(int)ch;
	char c;
	if(n>=97 && n<=122)
	{
		//convert to UpperCase
		c=toUpper(ch);
	}
	else if(n>=65 && n<=90)
	{
		//convert to LowerCase
		c=toLower(ch);
	}
	cout<<c<<endl;
	return 0;
}
