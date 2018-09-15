#include<iostream>
using namespace std;
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
int main()
{
	int a,b;
	int refr;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;	
	minByRef(a,b,refr);
	cout<<refr<<endl;
	return 0;
}

