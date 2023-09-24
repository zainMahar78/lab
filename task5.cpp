#include<iostream>
using namespace std;
main(){
	cout<<"Enter the student's name: ";
	string name;
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	float matric;
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	float fsc;
	cin>>fsc;
	cout<<"Enter Ecat marks (out of 400): ";
	float Ecat;
	cin>>Ecat;
	float Aggregate;
	Aggregate=matric/1100*10+fsc/550*40+Ecat/400*50;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<Aggregate<<"%";
}