#include "A_Standard.h"
#include "C_Case.h"

void Modify_con(Address_list* Contact) {
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
				cout << "Name: " << Contact->contacts[i].Name << "; ";
				cout << "Gender: " << Contact->contacts[i].Gender << "; ";
				cout << "Age: " << Contact->contacts[i].Age << "; ";
				cout << "Phone: " << Contact->contacts[i].Phone << "; ";
				cout << "Address: " << Contact->contacts[i].Address << "; " << endl;
				cout << "Modify: " << endl;
				cin.get();
				cout << "Name: ";
				cin.getline(Contact->contacts[Contact->Cur_con].Name, 100);
				cout << "Gender: ";
				cin.getline(Contact->contacts[Contact->Cur_con].Gender, 50);
				cout << "Age: ";
				cin >> Contact->contacts[Contact->Cur_con].Age; //函数中的输入失败无法继续运行，如何解决？
				cin.get();
				cout << "Phone: ";
				cin.getline(Contact->contacts[Contact->Cur_con].Phone, 100);
				cout << "Address: ";
				cin.getline(Contact->contacts[Contact->Cur_con].Address, 100);
				cout << "New data updated." << endl;
			}
			else {
				t_count++;
			}
		}
		if (t_count == Contact->Cur_con) {
			cin.get();
			cout << "No contact matches." << endl;
		}
		cout << "Press ENTER to continue." << endl;
	}
	cin.get();
	system("cls");
}