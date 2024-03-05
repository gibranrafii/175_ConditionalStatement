#include <iostream>
using namespace std;

int main()
{
	int nBilA, nBilB;
	string status;
	srand(time(0));

	nBilA = rand() % 10;
	nBilB = rand() % 10;

	if (nBilA == nBilB) {
		status = "Nilai Sama besar";
	}

	else if (nBilA > nBilB) {
		status = "Nilai A lebih besar dari nilai B";
	}

	else {
		status = "nilai A lebih kecil dari nilai B";
	}

	cout << "Bilangan A = " << nBilA << endl;
	cout << "Bilangan B = " << nBilB << endl;
	cout << "Status = " << status << endl;




}