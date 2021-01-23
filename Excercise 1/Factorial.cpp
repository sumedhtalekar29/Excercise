#include<iostream>
using namespace std;

int main()
{
	int num, i, fact=1;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	
	cout<<"factorial = "<<fact<<endl;
}
