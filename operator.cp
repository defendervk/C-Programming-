#include<iostream>
using namespace std;

// Operator in c++
int main()
{     int a,b,c,ch,add,mul,div,sub;
    cout<<"Enter Your First Number:";
    cin>>a;
    cout<<"Enter Your Second Number:";
    cin>>b;
    cout<<"Add press 1"<<endl;
    cout<<"substruct press 2"<<endl;
    cout<<"Multiply press 3"<<endl;
    cout<<"Division press 4"<<endl;
    cout<<"Your choice ";
    cin>>ch;
    if (ch==1)
    {
    	add=a+b;
    	cout<<add;
	}
	else if(ch==2)
	{
		sub=a-b;
		cout<<sub;
		
	}
	else if(ch==3)
	{
		mul=a*b;
		cout<<mul;
		
	}
	else if(ch==4)
	{
		div=a/b;
		cout<<div;
		
	}
	else
	{
		cout<<"Invaild Operation";
		
	}


 }

