#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	
	int year=1;
	double loan, inter, pay, total,rate;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
		
	
	while(loan>0){

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 

		cout << setw(13) << left << loan ;
		inter=loan*rate/100;

		cout << setw(13) << left << inter;
		total=loan+inter;
		cout << setw(13) << left << total;

		if(pay>total) pay=total;
		cout << setw(13) << left << pay;
		loan=total-pay;
		cout << setw(13) << left << loan;
		cout << "\n";	
		
		year++;

	}
	
	return 0;

}
