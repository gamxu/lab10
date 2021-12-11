#include<iostream>
using namespace std;

int printO(int row, int amount)
{
	if(row<=0 || amount<=0){
		cout << "Invalid input\n";
	}else{ 
		for(int i=0; i<row; i++){
			for(int j=0; j<amount; j++){
				cout << "O";
			}
			cout << '\n';
		}
	}
	return 0;
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
