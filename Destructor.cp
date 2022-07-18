#include<iostream>
using namespace std;

// Destructor in C++ programming
int count=0;
class A{
      public:
      	A()
      	{
      		cout<<"Object"<<++count<<"Created"<<endl;
		  }
          
          ~A()
          {
          	cout<<"Obeject"<<--count<<"Deleted"<<endl;
		  }


};
int main()
{
A obj,obj2;


 }

