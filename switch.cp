#include<iostream>
using namespace std;

int main()
{
// switch statement 
   int choice;
   cout<<"Press 0"<<endl;
   cout<<"Press 1"<<endl;
   cout<<"Press 2"<<endl;
   cout<<"Press 3"<<endl;
   cout<<"Press 4"<<endl;
   cout<<"Press 5"<<endl;
   cout<<"Press 6"<<endl;
   cout<<"Press 7"<<endl;
   cout<<"Enter Your choice:";
   cin>>choice;
   switch(choice)
   {
   
    case 0: 
    cout<<"Monday";
    break;
    case 1:
    	cout<<"Tuseday";
    	break;
    case 3: 
    cout<<"Wednesday";
       break;
    case 4:
    cout<<"Thursday";
       break;
    case 5:
    cout<<"Friday";
       break;
    case 6:
    cout<<"Saturday";
      break;
    default:
    	cout<<"Invalid Choice";
}
   
    return 0;  
   
   
 }

