#include <iostream>
#include <string>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int num;
	int contador1 = 0;
	int contador2 = 0;

	srand(time(NULL));
	bool tren[5][20];
	for (int vagon = 0; vagon < 5; vagon++) {
		for (int asiento = 0; asiento < 20; asiento++) {
			num = 0 + rand() % (2 - 0);
			if (num == 1) {
				tren[vagon][asiento] = true;
			}
			else {
				tren[vagon][asiento] = false;
			}
			cout << "v" << vagon << "a" << asiento << ": " << tren[vagon][asiento] << " | ";
		}
		cout << "\n";
	}
	cout << "\nPrimeros 10 asientos disponibles: \n";
	for (int vagon = 0; vagon < 5; vagon++) {
		for (int asiento = 0; asiento < 20; asiento++) {
			if (tren[vagon][asiento] != 1) {
				cout << "vagon " << vagon << ", asiento " << asiento << "\n";
				contador1++;
				if (contador1 >=6) {
					break;
				}
			}
		}
	}

	cout << "\nUltimos 10 asientos disponibles: \n";
	for (int vagon = 4; vagon >= 0; vagon--) {
		for (int asiento = 19; asiento >= 0; asiento--) {
			if (tren[vagon][asiento] != 1) {
				cout << "vagon " << vagon << ", asiento " << asiento << "\n";
				contador2++;
				if (contador2 >= 6) {
					break;
				}
			}
		}
	}
}