#include <iostream>
#include <iomanip>

using namespace std;

const int UKURAN = 4;

void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
	cout << "Matriks " << nama << ":" << endl;
	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			cout << setw(4) << matriks[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int matriksA[UKURAN][UKURAN] = {
		{1, 0, 2, 0},
		{0, 1, 0, 1},
		{2, 0, 1, 0},
		{0, 2, 0, 1}
	};

	int matriksB[UKURAN][UKURAN] = {
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{2, 2, 2, 2},
		{2, 2, 2, 2}
	};

	int hasilMatriks[UKURAN][UKURAN];

	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			hasilMatriks[i][j] = 0;
		}
	}

	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			for (int k = 0; k < UKURAN; k++) {

				hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
			}
		}
	}

	cout << "Nama	: Tegar Ludwinio Mahardhika " << endl;
	cout << "NIM	: 25104410001" << endl;
	cout << "Prodi	: Teknik Informatika 1A" << endl;
	cout << "Tugas Praktikum 4" << endl;

	cout << "\n--- Program Perkalian Matriks 4x4 ---" << endl;
	tampilkanMatriks(matriksA, "A");
	tampilkanMatriks(matriksB, "B");

	cout << "Matriks Hasil Perkalian (A x B):" << endl;
	tampilkanMatriks(hasilMatriks, "A x B");

	return 0;
}