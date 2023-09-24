#include<iostream>
using namespace std;
main(){
	cout<<"Enter the name of the cricket team: ";
	string team;
	cin>>team;
	cout<<"Enter the number of wins: ";
	int wins;
	cin>>wins;
	cout<<"Enter the number of draws: ";
	int draws;
	cin>>draws;
	cout<<"Enter the number of losses: ";
	int loses;
	cin>>loses;
	int points;
	points=wins*3+draws*1+loses*0;
	cout<<team<<" has obtained "<<points<<" points in the Asia Cup tournament.";
}