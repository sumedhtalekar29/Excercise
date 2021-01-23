#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter number"<<endl;
	cin>>num;
	
	bool flag = true;
	
	for(int i=1; i<num/2; i++)
	{
		if(num%2==0)
		{
			flag = false;
			break;
		}
	}
	
	if(flag==true)
	{
		cout<<"number is prime"<<endl;
	}
	else
	{
		cout<<"number is not prime"<<endl;
	}
}
