#include <iostream>
#include <limits>
using namespace std;
int main() {
	double *apstat=new double[4];
	int count;
	cout << "count: ";
	cin >> count;
	double total = 0;
	int dount = count;
	int teenyTiny = numeric_limits<int>::max();
	int bigBoy = numeric_limits<int>::min();
	while(count > 0) {
		cout << "Enter number [" << count << "]: ";
		cin >> apstat[--count];
		total += apstat[count];
		if(apstat[count]<teenyTiny)teenyTiny=apstat[count];
		if(apstat[count]>bigBoy)bigBoy=apstat[count];
	}
	double mean = total/dount;
	cout << "mean: " << mean << endl;
	cout << "min: " << teenyTiny << endl;
	cout << "max: " << bigBoy << endl;
	delete[] apstat;
}