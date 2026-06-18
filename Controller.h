#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Vista.h"

class Controller{

private:

Vista& ver;
Modelo& modelo;

public:
Controller(Modelo& auxModelo, Vista& auxVer);

int menu(int eleccion);
void agregarMedicamento();
void eliminarMedicamento();
void buscarMedicamento();
void mostrarInventario();
void cambiarCantidad();

};
#endif
