#include "gym.h"

int main(){

    Usuario u1(917, "Samuel Estrella Martinez", 19, "4461165657", true, "21/05/2026");

    Entrenador e1(158, "Jonatan Caleb Lopez Zuniga", 18, "4421238234",
                   "Rutina de tren superior", 3);

    Persona* personas[2];

    personas[0] = &u1;
    personas[1] = &e1;

    for(int i = 0; i < 2; i++){
        personas[i]->mostrarInfo();
        cout << endl;
    }

    return 0;
}