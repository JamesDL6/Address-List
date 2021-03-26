#include "A_Standard.h"
#include "C_Case.h"

void Search_con(Address_list* Contact) {
	using namespace std;
	string contrast;
	if (Contact->Cur_con == 0) {
		cout << "No data exists." << endl;
		cout << "Press ENTER to continue." << endl;
	}
	else {
		cin >> contrast;
		int t_count = 0;
		for (int i = 0; i < Contact->Cur_con; i++) {
			if (contrast == Contact->contacts[i].Name) {
				cout << "Name: " << Contact->contacts[i].Name << endl;
				cout << "Gender: " << Contact->contacts[i].Gender << endl;
				cout << "Age: " << Contact->contacts[i].Age << endl;
				cout << "Phone: " << Contact->contacts[i].Phone << endl;
				cout << "Address: " << Contact->contacts[i].Address << endl << endl;
			}
			else
				t_count++;
		}
		if (t_count == Contact->Cur_con)
			cout << "No contact matches." << endl;
		cout << "Press ENTER to continue." << endl;
		cin.get();
	}
	cin.get();
	system("cls");
}