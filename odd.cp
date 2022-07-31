 #include<iostream>
 using namespace std;

   int main(){
   	
   	int number,reaminder;
   	cout<<"Enter Your Number";
   	cin>>number;
   	
   	reaminder=number % 2;
   	
   	if(reaminder==0){
   		cout<<"Number is Even:" <<number <<endl;
	   }
	else{
		cout<<"Number is odd:" <<number <<endl;
		
	}
   }