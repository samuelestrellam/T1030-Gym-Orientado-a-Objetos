#include "gym.h"

int main(){

    Usuario u1(917, "Samuel Estrella Martinez", 19, "4461165657", true, "21/05/2026");

    Entrenador e1(158, "Jonatan Caleb López Zuñiga", 18, "4421238234",
                   "Rutina completa en hombres", 3);

    // Sobreescritura
    u1.mostrarInfo();

    cout << endl;

    e1.mostrarInfo();

    cout << endl;

    // Sobrecarga
    e1.asignarRutina();
    e1.asignarRutina("Pecho, Hombro Tricep");

    return 0;
}