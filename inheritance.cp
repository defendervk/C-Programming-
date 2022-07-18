#include<iostream>
using namespace std;
// inheritance in C++ programming 

class Dad{
       
        protected:
        	int amount;
        	public:
        		void input()
        		{
        			amount=100000;
				}


};
class Son : public Dad{
	
	 public:
	 	int money=20000;
	 	void show()
	 	{
	 		cout<<amount<<endl;
	 		cout<<money;
		 }
	
	
};
int main()
{
 Son s;
 s.input();
 s.show();


 }

