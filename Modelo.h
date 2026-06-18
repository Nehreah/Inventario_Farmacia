#ifndef MODEL_H
#define MODEL_H


#include <vector>
#include <fstream>
#include "Inventario.h"
#include "Medicamento.h"

class Model{
private:

std::string nombreArchivo;



public:

MMedicamentos();
void cargarArchivo(Inventario& auxCatalogo);
void guardarArchivo(const Inventario& auxCatalogo);
void actualizarArchivo(const Inventario& auxCatalogo);
void agregarMedicamento(Inventario& auxCatalogo);
void cambiarCantidad(Inventario& auxCatalogo,int ID,int cantidad);

};

#endif
