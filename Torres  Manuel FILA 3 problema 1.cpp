//https://github.com/Manuel040603/Manuel-Angel-Torres-Chuquiyauri//
#include <iostream>
using namespace std;
void llenarMatriz2x3(int matriz2x3[][3], int filas, int columnas);
void llenarMatriz3x2(int matriz3x2[][2], int filas, int columnas);
void imprimirMatriz2x3(int matriz2x3[][3], int filas, int columnas);
void imprimirMatriz3x2(int matriz3x2[][2], int filas, int columnas);
void modificarMatriz2x3(int matriz2x3[][3], int filas, int columnas);
void modificarMatriz3x2(int matriz3x2[][2], int filas, int columnas);

int main() {
    int matriz2x3[2][3];
    int matriz3x2[3][2];
    cout << "Introduce los valores para la primera matriz (2x3):" << endl;
    llenarMatriz2x3(matriz2x3, 2, 3);
    cout << "Introduce los valores para la segunda matriz (3x2):" << endl;
    llenarMatriz3x2(matriz3x2, 3, 2);
    cout << "Primera matriz original (2x3):" << endl;
    imprimirMatriz2x3(matriz2x3, 2, 3);
    modificarMatriz2x3(matriz2x3, 2, 3);
    cout << "Primera matriz modificada (2x3):" << endl;
    imprimirMatriz2x3(matriz2x3, 2, 3);
    cout << "Segunda matriz original (3x2):" << endl;
    imprimirMatriz3x2(matriz3x2, 3, 2);
    modificarMatriz3x2(matriz3x2, 3, 2);
    cout << "Segunda matriz modificada (3x2):" << endl;
    imprimirMatriz3x2(matriz3x2, 3, 2);
    return 0;
}
void llenarMatriz2x3(int matriz2x3[][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Introduce el valor para matriz2x3[" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz2x3[i][j];
        }
    }
}
void llenarMatriz3x2(int matriz3x2[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Introduce el valor para matriz3x2[" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz3x2[i][j];
        }
    }
}
void imprimirMatriz2x3(int matriz2x3[][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2x3[i][j] << " ";
        }
        cout << endl;
    }
}        
void imprimirMatriz3x2(int matriz3x2[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz3x2[i][j] << " ";
        }
        cout << endl;
    }
}
void modificarMatriz2x3(int matriz2x3[][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz2x3[i][j] > 5) {
                matriz2x3[i][j] = 1;
            }
        }
    }
}
void modificarMatriz3x2(int matriz3x2[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz3x2[i][j] < 6) {
                matriz3x2[i][j] = 0;
            }
        }
    }
}
