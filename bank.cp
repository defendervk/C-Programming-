#include<iostream>
using namespace std;

// Data abstraction in C++ programming
class Bank{
	
	    private:
	 	int ATM_PIN;
	
     public:
    string Bank_Name;
	  int IFSC;
    int Acc_Number,Balance;
    
    void input()
    {    
        Bank_Name="SBI";
    	ATM_PIN=2323;
    	Balance=10000;
    	IFSC=2211;
    	Acc_Number=10204505634;
	}
	void output()
	{     
	    cout<<"Bank_Name:"<<endl;
		cout<<"ATM_PIN:"<<endl;
		cout<<"Balance:"<<endl;
		cout<<"IFSC:"<<endl;
		cout<<"Acc_Number:"<<endl;
	}

};
int main()
{
 Bank m;
 m.input();
 m.output();

 cout<<m.Bank_Name<<endl;
 cout<<m.ATM_PIN<<endl;
 cout<<m.Balance<<endl;
 cout<<m.IFSC<<endl;
 cout<<m.Acc_Number<<endl;

 }

