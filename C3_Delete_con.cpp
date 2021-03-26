#include "A_Standard.h"
#include "C_Case.h"

void Delete_con(Address_list* Contact) {
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
				for (int j = i; j < Contact->Cur_con; j++) {
					Contact->contacts[j] = Contact->contacts[j + 1];
				}
				Contact->contacts[Contact->Cur_con - 1] = Contact->contacts[1000];
				Contact->Cur_con--;
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