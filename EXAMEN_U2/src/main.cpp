#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
    // Variables obligatorias (Parte 1 y 2 de la rúbrica) [cite: 1, 2]
    string nombre = "Jhair"; 
    double notas[5]; 
    double suma = 0;

    cout << "--- SOFTWARE ACADEMY UTA ---" << endl;
    for(int i=0; i<5; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    // Persistencia (Parte 4 de la rúbrica) [cite: 41, 42, 43]
    ofstream file("../resultados/resultados.txt", ios::app);
    time_t t = time(0);
    char* dt = ctime(&t);

    if(file.is_open()) {
        file << "FECHA: " << dt;
        file << "ESTUDIANTE: " << nombre << endl;
        file << "PROMEDIO: " << (suma/5) << endl;
        file << "------------------------" << endl;
        file.close();
        cout << "Datos guardados en resultados.txt. Revisa la web!" << endl;
    }
    return 0;
}