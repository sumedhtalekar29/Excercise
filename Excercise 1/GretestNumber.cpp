#include<iostream>

using namespace std;

int main()
{
	int n1,n2,n3;
	cout<<"enter the number"<<endl;
	cin>>n1>>n2>>n3;
	
	if(n1 >= n2 && n1 >= n3)
	{
		cout<<n1<<" is greater"<<endl;
	}
	if(n2 >= n1 && n2 >= n3)
	{
		cout<<n2<<" is greater"<<endl;
	}
	if(n3 >= n1 && n3 >= n2)
	{
		cout<<n3<<" is greater"<<endl;
	}
}
