#ifndef GYM_H
#define GYM_H

#include<iostream>
#include<string>
#include<vector>

#include "usuario.h"
#include "entrenador.h"

using namespace std;

class Gym{
private:
    string nombre;
    string direccion;
    string telefono;

    vector<Usuario> usuarios;
    vector<Entrenador> entrenadores;

public:

    Gym(){}

    Gym(string nombre, string direccion, string telefono){
        this->nombre = nombre;
        this->direccion = direccion;
        this->telefono = telefono;
    }

    void agregarUsuario(Usuario usuario){
        usuarios.push_back(usuario);
    }

    void agregarEntrenador(Entrenador entrenador){
        entrenadores.push_back(entrenador);
    }

    void registrarPago(){
        cout << "Pago registrado" << endl;
    }

    void mostrarInfo(){
        cout << "Gym: " << nombre << endl;
    }
};

#endif