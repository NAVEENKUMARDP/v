#include <iostream>

using namespace std;
int main()
{
  char v;
  cout<<"Enter the input";
  cin>>v;
 if((v >= 'a'&& v<='z') || (v>='A'&& v<='Z'))
  {
      cout<<"It is alphabet";
  }
  else
  {
      cout<<"it is not alphabet";
  }
}
