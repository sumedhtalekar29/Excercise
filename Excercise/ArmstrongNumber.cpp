#include<iostream>
using namespace std;

int main()
{
	int num,rem,r,sum=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	int temp = num;
	while(num>0)
	{
		rem = num%10;
		sum = sum+(rem*rem*rem);
		num = num/10;
	}
	
	if(temp==sum)
	{
		cout<<"number is Armstrong "<<endl;
	}
	else
	{
		cout<<"number is not Armstrong "<<endl;
	}
}
