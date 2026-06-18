#ifndef MODEL_H
#define MODEL_H


#include <vector>
#include <fstream>
#include "Inventario.h"
#include "Medicamento.h"

class Modelo{
private:

std::string nombreArchivo;
Inventario catalogo;



public:

Modelo();
void cargarArchivo();
void guardarArchivo();
void actualizarArchivo();
void agregarMedicamento();
void cambiarCantidad(int ID,int cantidad);
Inventario& getCatalogo();

};

#endif
