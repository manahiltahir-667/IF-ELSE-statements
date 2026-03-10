#include<iostream>

using namespace std;

int main (){
    int marks;
    string grade;
    float feeDiscount;
	cout<<"Enter your marks:"<<endl;
	cin>>marks;
	
 if ((marks>=85)&&(marks<=100))
	 {
	 	cout<<"Good Performance"<<endl;
	 	grade="A";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=50000;
	 	cout<<"You got "<<feeDiscount<<"fee discount due to your good performance"<<endl;
		}   
	else if ((marks>=75)&&(marks<=80))
	   {
	 	cout<<"Good Performance"<<endl;
	 	grade="B+";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=30000;
	 	cout<<"You got"<<feeDiscount<<"fee discount due to your good performance"<<endl;
		} 
	else if ( (marks>=70)&&(marks<=75))
		{
	 	cout<<"Good Performance"<<endl;
	 	grade="B";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=20000;
	 	cout<<"You got "<<feeDiscount<<"fee discount due to your good performance"<<endl;
		} 
			
	else if ( (marks>=65)&&(marks<=70))
		{
	 	cout<<"Good Performance"<<endl;
	 	grade="C";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=10000;
	 	cout<<"You got"<<feeDiscount<<" fee discount due to your good performance"<<endl;
		} 

	   
	
	    else if ( (marks>=60)&&(marks<=65))
		{
	 	
	 	grade="D+";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=0;
	 	cout<<"You got "<<feeDiscount<<" discount due to your bad performance"<<endl;
		} 
		else if ( (marks>=50)&&(marks<=60))
		{
	 	
	 	grade="D";
	 	cout<<"Your grade is "<<grade<<endl;
	 	feeDiscount=0;
	 	cout<<"You got "<<feeDiscount<<" discount due to your bad performance"<<endl;
		} 
	else  
	
	
	cout << "\nYou are FAIL. Your Grade is F";
	
	
	return 0;
}
