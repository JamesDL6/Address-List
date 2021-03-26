#include "A_Standard.h"
#include "B_Myfunc01.h"
#include "A_Data.h"

int main() {
	Address_list Contact;
	Contact.Cur_con = 0;
	int check = 0;
	while (check == 0)
	{
		Menu();
		check = Swit(&Contact);
	}
	std::cin.get();
	return 0;
}