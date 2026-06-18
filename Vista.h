#ifndef VISTA_H
#define VISTA_H
#include "Modelo.h"

class Vista {

public:

Vista();
void mostrarTituloConNieve();
void imprimirAgregar();
void imprimirEliminar();
void imprimirBuscar();
void imprimirInventario();
void imprimirCantidad();
void mostrarInventario( Inventario& auxCatalogo) ;
void imprimirMedicamento(const Inventario& auxCatalogo, int ID);


};


#endif
