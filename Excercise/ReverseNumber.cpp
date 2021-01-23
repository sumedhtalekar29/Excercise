#include<iostream>
using namespace std;

int main()
{
	int num,rev=0, rem;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	while(num!=0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	
	cout<<"Reverse number = "<<rev<<endl;
	return 0;
}
