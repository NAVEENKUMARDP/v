#include <iostream>

using namespace std;

int main() 
{
    int l;
    cout<<"enter the value of l";
    cin>>l;
    if(l>=1000)
    {
    
    		if(l%4==0)
    		{
    			cout<<"it is a leap year";
    		}
    		else
    		{
    			cout<<"it is not a leap year";
    		}
    }
    
    return 0;
}
