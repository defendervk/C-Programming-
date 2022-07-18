#include<iostream>
using namespace std;

// Structrue & Union in C++ programming

struct student
{
	int marks; // 4 bytes allocated
	float avg; // 4 bytes allocated
	double salary; // 8 bytes allocated
};

union person
{
  int marks; 
  float avg;  
  double salary; // 8 bytes  allocated
  
  
	
};

int main()
{
   struct student s;
   union person s1;
   cout<<"Structure of size"<<sizeof(s)<<endl;
   cout<<"Union of size"<<sizeof(s1);
  
    return 0;
 }

