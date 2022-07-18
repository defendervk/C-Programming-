#include<iostream>
using namespace std;

// multi-level inheritance
class A{
	 protected:
	 int a,b;
	 public:
	 	void input()
	 	{
	 		cout<<"Enter First Number:";
	 		cin>>a;
	 		cout<<"Enter Second Number:";
	 		cin>>b;
		 }



};
class B : public A{
	public:
	int c;
	 public:
	 	void add()
	 	{
	 		c=a+b;
	 		cout<<"Addition:"<<c<<endl;
	 	}
	 		void sub()
	 		{
	 			c=a-b;
	 			cout<<"Substraction:"<<c<<endl;
			 }
		 
	
	
};
class C : public B{
	
	
	   public:
	   	void multi()
	   	{
	   		c=a*b;
	   		cout<<"Multiplication:"<<c<<endl;
	   		
		   }
		   void Div()
		   {
		   	c=a/b;
		   	cout<<"Division:"<<c<<endl;
		   }
	
	
};
int main()
{

  C obj;
  obj.input();
  obj.add();
  obj.sub();
  obj.multi();
  obj.Div();

 }

