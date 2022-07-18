#include<iostream>
using namespace std;

// friend function
class Cyber{
        
         private:
         	string hack;
         	public:
         		void show()
         		{
         			hack= "Access Granted System "<<endl;
				 }
 
 friend void attack(Cyber d);
 
 void attack(Cyber d)
 {
 	cout<<"System Access Denid"<<d.hack;
 }
};
int main()
{
  Cyber c;
  c.show();
  attack(d);
  


 }

