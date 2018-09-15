#include<iostream>
using namespace std;
// Function to add Even Numbers
int sumEvenNumbers(int n,int m)
{
	int s=0;
	for(int i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			s=s+i;
		}
	}
	return s;
}
// Function to add Square of Even Number
int sumSqureEvenNumbers(int n,int m)
{
	int s=0;
	while(n<=m)
	{
		if(n%2==0)
		{
			s=s+(n*n);
		}
		n++;
	}
	return s;
		
}
// Function to add Square of Odd Numbers
int sumSqureOddNumbers(int n,int m)
{
	int s=0;
	while(n<=m)
	{
		if(n%2!=0)
		{
			s=s+(n*n);
		}
		n++;
	}
	return s;
}
// Function to add Odd Numbers
int sumOddNumbers(int n,int m)
{
	int s=0;
	for(int i=n;i<=m;i++)
	{
		if(i%2!=0)
		{
			s=s+i;
		}
	}
	return s;
}
//Driver Function
int main()
{
	//ask User
	int a,b;
	cout<<"Enter two numbers";
	cin>>a,b;
	int t=a;
	if (b>t)
	{
		t=b;
	}
	int k=(a+b)-t;
	a=k;
	b=t;
	//sum Of Even
	int sumEven=sumEvenNumbers(a,b);
	//sum Of Odd
	int sumOdd=sumOddNumbers(a,b);
	//sum Of Square Even
	int sumSquareEven=sumSqureEvenNumbers(a,b);
	//sum Of Square Odd
	int sumSquareOdd=sumSqureOddNumbers(a,b);
	//Output
	cout<<"Sum of Even number in this range "<<sumEven<<endl;
	cout<<"Sum of Odd number in this range "<<sumOdd<<endl;
	cout<<"Sum of Square of Even number in this range "<<sumSquareEven<<endl;
	cout<<"Sum of Square of Odd number in this range "<<sumSquareOdd<<endl;
}

	
