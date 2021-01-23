#include<iostream>
using namespace std;

int main()
{
	int rem;
	int num1,num2;
	
	cout<<"enter first number"<<endl;
	cin>>num1;
	
	cout<<"enter first number"<<endl;
	cin>>num2;
	
	cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
	for(int i=num1; i<=num2; i++)
	{
		int sum=0;
		int num = i;
		
		while(num>0)
		{
			rem = num%10;
			sum = sum+(rem*rem*rem);
			num = num/10;
		}
		
		if(sum==i)
		{
			cout<<i<<endl;
		}
	}
}
