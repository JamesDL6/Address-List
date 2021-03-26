#include "A_Standard.h"
#include "B_Myfunc01.h"
#include "C_Case.h"

const int Max = 1000; //problem
int Swit(Address_list* Contact) {
	using namespace std;
	int select = -1;
	cin >> select;
	cin.get();
	switch (select) {
	case 1: {
		Add_con(Contact);
		return 0;
		break;
	}
	case 2: {
		Show_all(Contact);
		return 0;
		break;
	}
	case 3: {
		Delete_con(Contact);
		return 0;
		break;
	}
	case 4: {
		Search_con(Contact);
		return 0;
		break;
	}
	case 5: {
		Modify_con(Contact);
		return 0;
		break;
	}
	case 6: {
		Delete_all(Contact);
		return 0;
		break;
	}
	case 0:
		cout << "Program terminated." << endl;
		return 1;
		break;
	default: 
		cout << "Wrong input detected. Program terminated." << endl;
		return 1;
	}
 }