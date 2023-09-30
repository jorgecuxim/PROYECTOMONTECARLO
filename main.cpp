#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int totalPuntos = 1000000; 
    int puntosEnCirculo = 0;   

    for (int i = 0; i < totalPuntos; ++i) {
        double x = (double)rand() / RAND_MAX; 
        double y = (double)rand() / RAND_MAX; 

        // Calcula la distancia desde el punto al origen (0.5, 0.5)
        double distancia = (x - 0.5) * (x - 0.5) + (y - 0.5) * (y - 0.5);

        if (distancia <= 0.25) {
            puntosEnCirculo++;
        }
    }

   
    double estimacionPi = 4.0 * puntosEnCirculo / totalPuntos;

    cout << "Estimación de Pi con " << totalPuntos << " puntos: " << estimacionPi << endl;

    return 0;
}
