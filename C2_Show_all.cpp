#include "A_Standard.h"
#include "C_Case.h"

void Show_all(Address_list* Contact) {
	using namespace std;
	if (Contact->Cur_con == 0) {
		cout << "None data exit.\n";
		cout << "Press ENTER to continue." << endl;
		cin.get();
	}
	else {
		cout << endl;
		for (int i = 0; i < Contact->Cur_con; i++) {
			cout << "Name: " << Contact->contacts[i].Name << "; ";
			cout << "Gender: " << Contact->contacts[i].Gender << "; ";
			cout << "Age: " << Contact->contacts[i].Age << "; ";
			cout << "Phone: " << Contact->contacts[i].Phone << "; ";
			cout << "Address: " << Contact->contacts[i].Address << ";" << endl;
		}
		cout << endl << "Press ENTER to continue." << endl;
		cin.get();
	}
	system("cls");
}