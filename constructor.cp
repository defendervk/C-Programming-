#include<iostream>
using namespace std;

// constructor in C++
class A{
//	 int a,b;
	 int x,y;
    public:
//    A() // Default constructor
//   {
//   	 a=2;
//   	 b=3;
//   	 cout<<a<<endl;
//     cout<<b;
//   }

//
//    A(int a, int b)  // parameterized constructor
//    {
//    	cout<<a<<endl;
//    	cout<<b;
//	}

    A(int a,int b)
    {
    	x=a;
    	y=b;
       cout<<x<<endl;
       cout<<y;
    
	}
	A(A &ref)
	{
		x=ref.x;
		y=ref.y;
		cout<<x<<endl;
		cout<<y;
	}


};
int main()
{
  A obj(100,200);
  
 

 }

