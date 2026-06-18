#include "Controller.h"
#include "Vista.h"


Controller::Controller(Modelo& auxModelo, Vista& auxVer): modelo(auxModelo), ver(auxVer){
}

int Controller::menu(int eleccion){  
    ver.mostrarTituloConNieve();                     
    ver.mostrarMenuDeOpciones();
    //Se elige una opción de las dadas en el menú de opciones.
    while(!(std::cin>>eleccion)){
        ver.mostrarTituloConNieve();                     
        ver.mostrarMenuDeOpciones();
      std::cout<<"Ingrese una opción válida por favor";
    }
    return eleccion;
}


void Controller::agregarMedicamento(){
    ver.imprimirAgregar();//Muestra un titulo grande que dice "Agregar"
    std::cin.ignore();//Ignora una entrada de teclado
    modelo.agregarMedicamento();//Agrega un medicamento al catalogo/inventario
    modelo.guardarArchivo();//Agrega la nueva línea de medicamento al txt
}

void Controller::eliminarMedicamento(){
    ver.imprimirEliminar();//imprime titulo
    std::cin.ignore();
    int ID;
    std::cout<<"Ingrese el ID del medicamento que desea buscar y eliminar"<<std::endl;
    std::cin>>ID;
    std::cout<<"Se ha eliminado el medicamento: "<<std::endl;
    Inventario& catalogo = modelo.getCatalogo();
    ver.imprimirMedicamento(catalogo, ID);//Imprime los datos de un medicamento del catalogo según una ID dada
    catalogo.eliminarMedicamento(ID);//Elimina un medicamento del catalogo según una ID dada
    modelo.actualizarArchivo();//Actualiza todo el archivo dejandolo exactamente igual a los datos del objeto catalogo de la clase inventario.
}

void Controller::buscarMedicamento(){
    ver.imprimirBuscar();   
    std::cin.ignore();
    int ID;
    std::cout<<"Ingrese el ID del medicamento que desea buscar"<<std::endl;
    std::cin>>ID;
    Inventario& catalogo = modelo.getCatalogo();
    ver.imprimirMedicamento(catalogo, ID);
}

void Controller::mostrarInventario(){
    ver.imprimirInventario(); 
    Inventario& catalogo = modelo.getCatalogo();
    ver.mostrarInventario(catalogo);//Imprime una matriz con los datos de todo el inventario
}

void Controller::cambiarCantidad(){
    int ID;
    std::cout<<"Ingrese el ID del medicamento a cambiar cantidad"<<std::endl;
    std::cin>>ID;
    int cantidad;
    std::cout<<"Ingrese la nueva cantidad"<<std::endl;
    std::cin>>cantidad;     
    system("clear");
    ver.imprimirCantidad();     
    modelo.cambiarCantidad(ID,cantidad);//Cambia la cantidad según un ID y una cantidad dada.
    modelo.actualizarArchivo();
}
