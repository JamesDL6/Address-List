#ifndef A_DATA
#define A_DATA
const int MAX = 1001; // problem
struct Contact {
	char Name[100];
	char Gender[50];
	int Age;
	char Phone[100];
	char Address[100];
};
struct Address_list {
	struct Contact contacts[MAX];
	int Cur_con;
};
#endif A_DATA
