#include <iostream>
#include <string>
using namespace std;
class Order’sInformation {
	string name, add;
	int PhoneNumber, orderNum,NumOfCustmer;
public:
	Order’sInformation();
	void setName(string n) { name = n; }
	void setAdd(string a) { add = a; }
	void setNumber(int N) { PhoneNumber = N; }
	void setOrderNum();
	string getName() { return name; }
	string getAddress() { return add; }
	int getNumber() { return  PhoneNumber; }
	int getOrderNumber() { return orderNum; }
	void custmerInfo(int);
	void Menu();
};
Order’sInformation::Order’sInformation() {
	name = " ";
	add = " ";
	PhoneNumber = 0;
	orderNum = 0;
	NumOfCustmer = 0;
}

void Order’sInformation::custmerInfo(int choice) {
	cout << "Please enter your information:" << endl;
	cout << "Name:";
	getline(cin,name);
	cout << "Phone Number:";
	cin >> PhoneNumber;
	switch (choice) {
	case 1:
		cout << " Address:";
		getline(cin, add);
		break;
	case 2:
		cout << " Number of custmers:";
		cin >> NumOfCustmer;
		break;
	default:
		break;
	}
}
void Order’sInformation::Menu() {

}
	


int main()
{
	int choice,ON,i=0;
	Order’sInformation* OI=new Order’sInformation[ON];
	while (1) {
		cout << "Welcome to MR.chicken\n ";
		cout << "please Enter a Choice:- \n 1- takeaway\n 2- dine in" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			(OI + i)->custmerInfo(choice);

		}
	}
}