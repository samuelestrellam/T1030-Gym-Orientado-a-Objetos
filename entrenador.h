#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include<iostream>
#include<string>
#include "persona.h"

using namespace std;

class Entrenador : public Persona{
private:
    string especialidad;
    int experiencia;

public:

    Entrenador(){}

    Entrenador(int id, string nombre, int edad, string telefono,
               string especialidad, int experiencia)
        : Persona(id, nombre, edad, telefono){

        this->especialidad = especialidad;
        this->experiencia = experiencia;
    }

    // Sobrecarga
    void asignarRutina(){
        cout << "Rutina general asignada" << endl;
    }

    void asignarRutina(string rutina){
        cout << "Rutina asignada: " << rutina << endl;
    }

    // Sobreescritura
    void mostrarInfo() override{
        cout << "ENTRENADOR" << endl;
        Persona::mostrarInfo();
        cout << "Especialidad: " << especialidad << endl;
        cout << "Experiencia: " << experiencia << " años" << endl;
    }
};

#endif