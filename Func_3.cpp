#include<iostream>
using namespace std;
int maxByValue(int a,int b)
{
	int t=a;
	if(b>t)
	{
		t=b;
	}
	return t;
}
void maxByRef(int m,int n,int &r)
{
	r=maxByValue(m,n);
}
int minByValue(int a,int b)
{
	int t=a;
	if(b<t)
	{
		t=b;
	}
	return t;
}
void minByRef(int m,int n,int &r)
{
	r=minByValue(m,n);
}
int sumByValue(int a,int b)
{
	return (a+b);
}
void sumByRef(int m,int n,int &r)
{
	r=sumByValue(m,n);
}
int main()
{
	int a,b,n;
	int sum,max,min;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;	
	cout<<"Enter 1 to calculate Sum";
	cout<<"Enter 2 to calculate Maximum";
	cout<<"Enter 3 to calculate Minimum";
	cin>>n;
	sumByRef(a,b,sum);
	maxByRef(a,b,max);
	minByRef(a,b,min);
	if(n==1)
	{
		cout<<sum<<endl;
	}
	if(n==2)
	{
		cout<<max<<endl;
	}
	if(n==3)
	{
		cout<<min<<endl;
	}
	return 0;
}

