#include "A_Standard.h"
#include "C_Case.h"

void Delete_all(Address_list* Contact) {
	using namespace std;
	if (Contact->Cur_con == 0) {
		cout << "No data exists." << endl;
		cout << "Press ENTER to continue." << endl;
	}
	else {
			for (int i = 0; i < Contact->Cur_con; i++) {
				Contact->contacts[i] = Contact->contacts[1000];
				Contact->Cur_con = 0;
				cout << Contact->Cur_con << endl;
		}
		cout << "Press ENTER to continue." << endl;
	}
	cin.get();
	system("cls");
}