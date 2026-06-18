#ifndef MODEL_H
#define MODEL_H


#include <vector>
#include <fstream>
#include "Inventario.h"
#include "Medicamento.h"

class Modelo{
private:

std::string nombreArchivo;



public:

Modelo();
void cargarArchivo(Inventario& auxCatalogo);
void guardarArchivo(Inventario& auxCatalogo);
void actualizarArchivo(Inventario& auxCatalogo);
void agregarMedicamento(Inventario& auxCatalogo);
void cambiarCantidad(Inventario& auxCatalogo,int ID,int cantidad);

};

#endif
