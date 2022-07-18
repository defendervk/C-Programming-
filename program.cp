#include<iostream>
using namespace std;

// program using structure

struct student
{
	int roll;
	char name[10];
	float marks;
};


int main()
{
  struct student s;
  cout<<"Enter Roll:"<<endl;
  cin>>s.roll;
   cout<<"Enter Name:"<<endl;
  cin>>s.name;
   cout<<"Enter Marks:"<<endl;
  cin>>s.marks;
  
  cout<<"Student Roll:"<<s.roll<<endl;
  cout<<"Student Name:"<<s.name<<endl;
  cout<<"Student Marks:"<<s.marks<<endl;
  
  

  

 }

