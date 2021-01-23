#include<iostream>
using namespace std;

int main()
{
	int arr[7] = {89, 34 ,50, 23, 100, 39, 455};
	int largest=0;
	
	for(int i=0; i<=7; i++)
	{
		if(arr[i] > largest)
	    {
		   largest = arr[i];
	    }  
	}
	cout<<largest<<endl;
}
