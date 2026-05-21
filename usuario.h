#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include<string>
#include "persona.h"

using namespace std;

class Usuario : public Persona{
private:
    bool membresiaActiva;
    string fechaRegistro;

public:

    Usuario(){}

    Usuario(int id, string nombre, int edad, string telefono,
             bool membresiaActiva, string fechaRegistro)
        : Persona(id, nombre, edad, telefono){

        this->membresiaActiva = membresiaActiva;
        this->fechaRegistro = fechaRegistro;
    }

    void renovarMembresia(){
        membresiaActiva = true;
        cout << "Membresia renovada" << endl;
    }

    void asignarRutina(){
        cout << "Rutina asignada al usuario" << endl;
    }

    // Sobreescritura
    void mostrarInfo() override{
        cout << "USUARIO" << endl;
        Persona::mostrarInfo();
        cout << "Fecha Registro: " << fechaRegistro << endl;
    }
};

#endif