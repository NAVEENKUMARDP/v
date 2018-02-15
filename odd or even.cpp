#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter the Number to check";
	cin>>num;
	if(num!=0)
	{
	if(num%2==0)
	{
	cout<<"The Number odd";
	}
	else
	{
	cout<<"The number is even";
	}
	}
	else
	{
	cout<<"Enter valied positive integer";
	}
	return 0;
}
