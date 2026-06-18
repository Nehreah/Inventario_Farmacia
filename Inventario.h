#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <iostream>
#include <vector>
#include "Medicamento.h"

class Inventario{

private:

std::vector <Medicamento> medicamentos;
std::string fecha;

public:

Inventario ();

//getters
std::string getFecha() const;
Medicamento getMedicamento(int IDBuscado) const;
Medicamento getMedicamento(std::string i) const;


//setters
void agregarMedicamento(const Medicamento& auxMedicamento);
void setFecha(const std::string& auxFecha);
void eliminarMedicamento(int IDBuscado);
bool cambiarCantidad(int IDBuscado, int cantidad);
int getSize();


};


#endif
