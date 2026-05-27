#ifndef RUTINA_H
#define RUTINA_H

#include<iostream>
#include<string>

using namespace std;

class Rutina{

private:
    int id;
    string nombre;
    string descripcion;
    string dificultad;

public:

    Rutina(){}

    Rutina(int id, string nombre, string descripcion, string dificultad){

        this->id = id;
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->dificultad = dificultad;
    }

    void mostrarRutina(){

        cout << "Rutina: " << nombre << endl;
        cout << "Dificultad: " << dificultad << endl;
    }

};

#endif