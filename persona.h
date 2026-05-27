#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
#include<string>

using namespace std;

class Persona{
protected:
    int id;
    string nombre;
    int edad;
    string telefono;

public:

    Persona(){
        id = 0;
        nombre = "";
        edad = 0;
        telefono = "";
    }

    Persona(int id, string nombre, int edad, string telefono){
        this->id = id;
        this->nombre = nombre;
        this->edad = edad;
        this->telefono = telefono;
    }

    virtual void mostrarInfo(){
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Telefono: " << telefono << endl;
    }

    virtual ~Persona(){}

};

#endif