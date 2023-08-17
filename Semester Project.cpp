#include <iostream>
#include <string>

using namespace std;
int main(){
	int balance = 500;
	cout <<"WELCOME TO USSD SYSTEM\n";
	
	while (true){
		
		int choice;
    cout << "1. Balance Inquiry\n";
    cout << "2. Data Plan Activation\n";
    cout << "3. Account Recharge\n";
    cout << "4. Transacttion History\n";
    cout << "5. Profile Viewing\n";
    cout << "6. Customer Support Access\n";
    cout << "7. Language selection\n";
    cout << "8. Exit\n";
	
	cin >>choice;
	switch (choice){
		case 1:
			cout << "Your available balance is $500\n";
			break;
			case 2:
				int choice;
				cout << "1. 2.2gb=$2\n";
				cout << "2. 3.3gb=$3\n";
				
				cin >> choice;
	switch(choice){
		case 1:
			
			balance=balance= 2;
			cout << "1gb data successfully purchased\n";
			cout << " Your balance is:"<<balance<<endl;
			break;
			
			case 2:
				balance= 3;
				cout << "2gb data successfully purchased\n";
				cout << " Your balance is:"<<balance<<endl;
				break;
		}
		
		break;
		case 3:
		int recharged;
		cout << "Enter recharge amount :\n";
		cin >>recharged;
		cout <<"$" << recharged  <<"Successfully recharged to this account\n";
		
		break;
		case 4: 
		cout <<"Transaction history\n";
		cout << "An amount of $ \n" << recharged << "..... was successfully recharged.......\n";
		
		case 5:
		cout << "        Profile information:\n";
		cout << "Name : Abubakar Nazir\n";	
		cout << "Phone number : (+233) 558 177 907\n";
		cout << "Email : abkarnazir222@gmail.com\n";
		cout << "..................................\n";
		
		break;
		case 6:
			cout << "contact customer support service on (+233) 558 177 907\n";
			break;
			
			case 7:
			cout << "Language selected : English\n";
			break;
		case 8:
			cout << "Exiting the USSD system\n";

	}	
	return 0;
    }
		
	}

