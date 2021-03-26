#include "A_Standard.h"
#include "B_Myfunc01.h"
#include "C_Case.h"

void Add_con(Address_list* Contact) {
	using namespace std;
	if (Contact->Cur_con == 1000) { //problem
		cout << "Out of storage." << endl;
		return;
	}
	else {
		cout << "Name: ";
		cin.getline(Contact->contacts[Contact->Cur_con].Name, 100);
		cout << "Gender: ";
		cin.getline(Contact->contacts[Contact->Cur_con].Gender,50);
		cout << "Age: ";
		cin >> Contact->contacts[Contact->Cur_con].Age; //函数中的输入失败无法继续运行，如何解决？
		cin.get();
		cout << "Phone: ";
		cin.getline(Contact->contacts[Contact->Cur_con].Phone, 100);
		cout << "Address: ";
		cin.getline(Contact->contacts[Contact->Cur_con].Address,100);

		Contact->Cur_con++;
	}
	system("cls");
}