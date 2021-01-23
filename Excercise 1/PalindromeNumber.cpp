#include<iostream>
using namespace std;

int main()
{
	int num,rem,sum=0;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	int temp = num;
	while(num>0)
	{
		rem = num%10;
		sum = (sum*10)+rem;
		num = num/10;
	}
	
	if(temp==sum)
	{
		cout<<"number is Palindrome : "<<sum<<endl;
	}
	else
	{
		cout<<"number is not Palindrome"<<endl;
	}
}
