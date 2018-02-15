#include <iostream>

using namespace std;
int main()
{
  char v;
  cout<<"Enter the input";
  cin>>v;
  if( v=='a'|| v=='e'|| v=='i'|| v== 'o'|| v=='u'||
   v== 'A'||v== 'E'||v=='I'|| v== 'O'||v=='U')
  {
      cout<<"it is vowel";
  }
  else
  {
      cout<<"it is consonant";
  }
}
