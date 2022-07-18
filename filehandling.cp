#include<iostream>
using namespace std;
#include<fstream>
int main()
{

//file handling
  // create file use ofstream

//    ofstream newfile("c:\\users\\vk592\\Desktop\\file.txt");
//    cout<<"file created";
//    newfile<<"Welcome To world:";
//    newfile.close();
    
   // Read file use ifstream
   string str;
  ifstream newfile("c:\\users\\vk592\\Desktop\\file.txt");
    while(getline(newfile,str))
    {
    	cout<<str;
    	
	}
	newfile.close();
 }

