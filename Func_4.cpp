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
int main()
{
	int a,b;
	int refr;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;	
	maxByRef(a,b,refr);
	cout<<refr<<endl;
	return 0;
}

	
