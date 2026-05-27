#ifndef MEMBRESIA_H
#define MEMBRESIA_H

#include<iostream>
#include<string>

using namespace std;

class Membresia{

private:
    int id;
    string tipo;
    float costo;
    string fechaInicio;
    string fechaVencimiento;

public:

    Membresia(){}

    Membresia(int id, string tipo, float costo,
               string fechaInicio, string fechaVencimiento){

        this->id = id;
        this->tipo = tipo;
        this->costo = costo;
        this->fechaInicio = fechaInicio;
        this->fechaVencimiento = fechaVencimiento;
    }

    bool estaActiva(){

        return true;
    }

    void mostrarInfo(){

        cout << "Tipo: " << tipo << endl;
        cout << "Costo: $" << costo << endl;
    }

};

#endif