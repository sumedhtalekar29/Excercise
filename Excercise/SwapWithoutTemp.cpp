#include<iostream>

using namespace std;

int main()
{
	int a=10, b=20;
	cout<<"before sawping number"<<endl;
	cout<<a<<" "<<b<<endl;
	
	cout<<"After sawping number"<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<a<<" "<<b<<endl;
}
