#include <iostream>
using namespace std;

int main()
{
	int nilaiMatematika, nilaiFisika, nRerata;
	string status;

	cout << "Masukkan Nilai Matematika = ";
	cin >> nilaiMatematika;

	cout << "Masukkan Nilai Fisika = ";
	cin >> nilaiFisika;

	nRerata = (nilaiFisika + nilaiMatematika) / 2;


	if (nRerata > 60) {
		status = "Lulus";
	}
	else if (nilaiMatematika > 70) {
		status = "Tidak Lulus";
	}
	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai MTK = " << nilaiMatematika << endl;
	cout << "Nilai Fisika = " << nilaiFisika << endl;
	cout << "rata rata nilai = " << nRerata << endl;
	cout << "Statusnya Adalah " << status << endl;


	return (0);
}
