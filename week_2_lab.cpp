#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	char grade;
	
	int aCount, bCount, cCount, dCount, fCount;
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
	cout << "Enter the letter grade, \n The EOF character to end input\n";
	while( cin >> grade ){
		grade = tolower(grade);
		
		if(grade == 'a'){
			aCount++;
			continue;}
		else if(grade == 'b'){	
			bCount++;
			continue;}
		else if(grade == 'c'){	
			cCount++;
			continue;}
		else if(grade == 'd'){	
			dCount++;
			continue;}
		else if(grade == 'f'){
			fCount++;
			continue;}
		else
			cout << "Incorrect letter grade entered.\n Enter a new grade.\n";				
		}
		
	cout << "The totals for each letter grade are :";
			cout << "\nA : " << aCount;
			cout << "\nB : " << bCount;
			cout << "\nC : " << cCount;
			cout << "\nD : " << dCount;
			cout << "\nF : " << fCount;	
	return 0;
	}
