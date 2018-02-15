#include <iostream>

using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter the input";
  cin>>x;
  cin>>y;
  cin>>z;
  if(x>y&&x>z)
  {
      cout<<"x is biggest number";
  }
  else if(y>z)
  {
      cout<<" y is biggest number";
  }
  else
  {
      cout<<"z is biggest number";
  }
}
