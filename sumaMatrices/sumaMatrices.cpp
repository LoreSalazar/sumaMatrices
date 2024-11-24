#include <iostream>

using namespace std;

void sumaMatrices(int matrizUno[10][10], int matrizDos[10][10], int *n) {

	int matrizRes[10][10];

	for (int i = 1; i <= *n; i++) {
		for (int j = 1; j <= *n; j++) {
			matrizRes[i][j] = matrizUno[i][j] + matrizDos[i][j];
		}
	}

	for (int i = 1; i <= *n; i++) {
		for (int j = 1; j <= *n; j++) {
			cout << matrizRes[i][j];
			cout << "   ";
		}
		cout << "\n";
	}

}

int main() {

	int nMatriz = 0, matriz1[10][10], matriz2[10][10];

	cout << "Indique de cuanto seran las matrices: SOLO SE ACEPTAN MATRICES CUADRADAS: " << endl;
	cin >> nMatriz;

	cout << "------------------- MATRIZ 1 --------------------" << endl;

	for (int i = 1; i <= nMatriz; i++) {
		for (int j = 1; j <= nMatriz; j++) {
			cout << "Digite el numero para la posicion de la fila " << i << "columna " << j << ": " << endl;
			cin  >> matriz1[i][j];
		}
	}

	cout << "------------------- MATRIZ 2 --------------------" << endl;

	for (int i = 1; i <= nMatriz; i++) {
		for (int j = 1; j <= nMatriz; j++) {
			cout << "Digite el numero para la posicion de la fila " << i << "columna " << j << ": " << endl;
			cin  >> matriz2[i][j];
		}
	}

	sumaMatrices(matriz1, matriz2, &nMatriz);

	return 0;
}