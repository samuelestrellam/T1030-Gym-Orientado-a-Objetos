#ifndef PAGO_H
#define PAGO_H

#include<iostream>
#include<string>

using namespace std;

class Pago{
private:
    int id;
    float monto;
    string fecha;
    string metodoPago;
    string estado;

public:

    Pago(){}

    Pago(int id, float monto, string fecha,
         string metodoPago, string estado){

        this->id = id;
        this->monto = monto;
        this->fecha = fecha;
        this->metodoPago = metodoPago;
        this->estado = estado;
    }

    void mostrarInfo(){
        cout << "Monto: $" << monto << endl;
    }
};

#endif