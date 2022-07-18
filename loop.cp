#include<iostream>
using namespace std;

int main()
{
// Looping statement C++ programming 
// while loop

 int a=10;
 while(a>=10)
 {
   cout<<a;
    a++;
}
  
  // for lop
  
  int num,i;
  cout<<"Enter Your Number";
  cin>>num;
   
   for(i=1;i<=num;i++)
   {
   	cout<<i<<endl;
   	
   }

  // jumping statement
   
   int j;
   for(j=1;j<=10;j++)
   {
     if(j==5)
     break;  // use for break statement
    cout<<"Hello"<<endl;
}
  
   for(j=1;j<=10;j++)
   {
     if(j==5)
     continue;  // use for continue statement
    cout<<"Hello"<<endl;
    
  
    
 }
   return 0;
   
}
