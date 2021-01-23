#include<iostream>
using namespace std;

int main()
{
	int num;
	bool flag=true;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	for(int i=2; i<=num/2; i++)
	{
		if(num%2 == 0)
		{
		   flag = false;
		   break;
		}
	}
	
	if(flag == true)
	{
		cout<<"number is prime"<<endl;
	}
	else
	{
		cout<<"number is not prime"<<endl;
	}
}
