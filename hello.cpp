#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	cout << "Hello World!\n";
	printf("Hello world\n");

	int money;
	cout << "How much: ";
	cin >> money;

	cout << "$" << money << endl;

	int cmoney;
	scanf("%d", &cmoney);
	printf("You have %d apples\n", cmoney);
	
	if(money>10) {
		cout << "$" << money << " is a lot of money"<< endl;
	}
	
	
	
	return 0;
}
