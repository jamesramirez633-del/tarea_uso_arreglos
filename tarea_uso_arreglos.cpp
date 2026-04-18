#include <iostream>
using namespace std;

int main() {
    int n;
    float notas[20][4];
    float promedioEstudiante[20];
    float sumaGeneral = 0;
    float mayor = 0, menor = 100;
    int aprobados = 0, reprobados = 0;

    cout << "Cantidad de estudiantes (max 20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Cantidad invalida.";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        float suma = 0;
        cout << "\nEstudiante " << i + 1 << endl;

        for (int j = 0; j < 4; j++) {
            do {
                cout << "Nota " << j + 1 << ": ";
                cin >> notas[i][j];
            } while (notas[i][j] < 0 || notas[i][j] > 100);

            suma += notas[i][j];

           
            if (notas[i][j] > mayor) mayor = notas[i][j];
            if (notas[i][j] < menor) menor = notas[i][j];
        }

        promedioEstudiante[i] = suma / 4;
        sumaGeneral += promedioEstudiante[i];

        if (promedioEstudiante[i] >= 70)
            aprobados++;
        else
            reprobados++;
    }

 
    cout << "\n RESULTADOS \n";

    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << notas[i][j] << " ";
        }
        cout << "| Promedio: " << promedioEstudiante[i] << endl;
    }

    cout << "\nPromedio general: " << sumaGeneral / n << endl;
    cout << "Nota mas alta: " << mayor << endl;
    cout << "Nota mas baja: " << menor << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    return 0;
}
