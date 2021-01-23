#include<iostream>
using namespace std;

int main()
{
	int num=10, n1=0, n2=1;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		cout<<n1 + " + ";
		
		int sum = n1+n2;
		cout<<sum<<endl;
		n1=n2;
		n2=sum; 
	}
}
