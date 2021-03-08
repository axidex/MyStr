#include "mainwin.cpp"
#include <iostream>


using namespace std;

int main()
{
  
  
  MyString a;
  MyString b;
  a= "foo";
  b=  "ss";
  a=b;
  if (a == b)
  {
    cout << "true"<<endl;
  }
  
  
  system("PAUSE");       
return 0;
}