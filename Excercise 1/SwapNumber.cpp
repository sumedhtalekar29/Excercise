#include<iostream>

using namespace std;

int main()
{
	int a=10, b=20, c;
	cout<<"before sawping number"<<endl;
	cout<<a<<" "<<b<<endl;
	
	cout<<"After sawping number"<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;
}
