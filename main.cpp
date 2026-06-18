#include "Inventario.h"
#include "Modelo.h"
#include "Vista.h"
#include <string>
#include <iostream>
#include "Controller.h"



/*
Acá en el main únicamente hay lo necesario, todas las funciones y métodos, están contenidos en las clases el "system("clear");" limpia la consola
*/

int main() {
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  
  Modelo modelo;//Inicio un objeto Modelo
  Vista ver;//Inicio un objeto de visión
  modelo.cargarArchivo();
  Controller control(modelo, ver);
  int eleccion;

  while(!(eleccion==0)){
    eleccion = control.menu(eleccion);
    if (eleccion == 0){
      std::cout<<"El programa se cerrará"<<std::endl;
      return 0;
    }
    
    else if (eleccion >0 && eleccion <= 5){
      
      switch(eleccion){//Para hacer funcionar el tablero de opciones. Cada case es una opción, encierra en llaves para mantener las variables contenidas {};
      
          case 1:{
            control.agregarMedicamento();
            break;
          }

          case 2:{
            control.eliminarMedicamento();
            break;
          }

          case 3:{
            control.buscarMedicamento();
            break;
          }

          case 4:{
            control.mostrarInventario();
            break;
          }    

          case 5:{
            control.cambiarCantidad();
            break;
          }  
      }
   }
   else{
    std::cout<<"Opción no valida"<<std::endl;
   }
    std::cout<<"Presione Enter para continuar"<<std::endl;
    std::cin.ignore();
    std::cin.get();
    
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
    
  }
  
  return 0;

}
