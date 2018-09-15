#include<iostream>
using namespace std;
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
	int a,b;
	int refr;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;	
	sumByRef(a,b,refr);
	cout<<refr<<endl;
	return 0;
}

