#include<iostream>
using namespace std;
main(){
	cout<<"Enter the current world population: ";
	int population;
	cin>>population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	int n;
	cin>>n;
	int decades;
	decades=n*360 + population;
	cout<<"The population in three decades will be: "<<decades;
}