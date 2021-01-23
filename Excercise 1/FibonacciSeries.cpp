#include<iostream>
using namespace std;

int main()
{
	int n1=0, n2=1, n3, num;
	cout<<"enter the number"<<endl;
	cin>>num;

	cout<<"Fibanocci Series ="<<endl;	
	cout<<n1<< " " <<n2<<endl;
	
	for(int i=2; i<num; ++i)
	{
		n3 = n1+n2;
		n1=n2;
		n2=n3;
		
		cout<<n3<<endl;
		
	}
}
