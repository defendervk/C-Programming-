#include<iostream>
using namespace std;
// encapsulation in C++ programming

class criminal{
 
      private:
      	string name,address;
      	int mobile_no;
         
         public:
         	void input()
         	{
         		name='Raj';
         		address='Delhi ';
         		mobile_no=356654566;
			 }
			 void output()
			 {
			 	cout<<"Name:"<<endl;
			 	cout<<"Address:"<<endl;
			 	cout<<"Mobile_No:"<<endl;
			 	
			 }

};
int main()
{

 criminal c;
 c.input();
 c.output(); 
  
   cout<<c.name<<endl;
   cout<<c.address<<endl;
   cout<<c.mobile_no<<endl;
  
 
 }

