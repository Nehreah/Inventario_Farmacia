#include "Vista.h"
#include "Modelo.h"
#include "Medicamento.h"
#include <iostream>



Vista::Vista(){}



void Vista::mostrarTituloConNieve() {
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
        std::cout << R"(
                                                                                ███ █   █ █   █ █████ █   █ █████  ███  ████  ███  ███    
                                                                                 █░░██  █░█░  █░█░░░░░██  █░ ░█░░░█ ░░█ █░░░█  █░░█ ░░█   
                                                                                 █░░█░█ █░█░░ █░████░░█░█ █░░ █░░░█████░████░░ █░░█░ ░█░  
                                                                                 █░░█░░██░░█░█ ░█░░░░ █░░██░░ █░░ █░░░█░█░░█░ ░█░░█░░ █░░ 
                                                                                ███░█░░ █░░ █ ░ █████░█░░ █░░ █░░ █░░░█░█░░░█░███░ ███ ░░ 
                                                                                 ░░░ ░░  ░░  ░ ░ ░░░░░ ░░  ░░  ░░  ░░  ░░░░  ░ ░░░  ░░░ ░ 
                                                                                  ░░░ ░   ░   ░   ░░░░░ ░   ░   ░   ░   ░ ░   ░ ░░░  ░░░  
                              )"<<std::endl<<std::endl;
}

void Vista::mostrarMenuDeOpciones(){

  std::cout<<R"(               
                                                                                     ▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌
                                                                                          Seleccione la opción deseada:
                                                                                          1. Agregar medicamento a inventario.
                                                                                          2. Eliminar medicamento del inventario.
                                                                                          3. Buscar medicamento del inventario.
                                                                                          4. Mostrar todo el inventario.
                                                                                          5. Cambiar cantidad de algún medicamento.
                                                                                          0. Salir.
                                                                                     ▐▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
                                                                                          )"<<std::endl;
}



void Vista::imprimirAgregar(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  std::cout<<R"( 
                                                       ███   ███  ████  █████  ███   ███  ████     █   █ █████ ████  ███  ███   ███  █   █ █████ █   █ █████  ███    
                                                      █ ░░█ █ ░░░ █░░░█ █░░░░░█ ░░░ █ ░░█ █░░░█    ██ ██░█░░░░░█░░░█  █░░█ ░░░ █ ░░█ ██ ██░█░░░░░██  █░ ░█░░░█ ░░█   
                                                      █████░█░ ██░████░░████░░█░ ██░█████░████░░   █░█ █░████░░█░░░█░ █░░█░ ░░░█████░█░█ █░████░░█░█ █░░ █░░░█░ ░█░  
                                                      █░░░█░█░░ █░█░░█░ █░░░░ █░░ █░█░░░█░█░░█░ ░  █░░░█░█░░░░ █░░ █░░█░░█░░   █░░░█░█░░░█░█░░░░ █░░██░░ █░░ █░░ █░░ 
                                                      █░░░█░░███ ░█░░░█░█████░ ███ ░█░░░█░█░░░█░   █░░ █░█████░████ ░███░ ███  █░░░█░█░░ █░█████░█░░ █░░ █░░  ███ ░░ 
                                                       ░░  ░░ ░░░ ░░░  ░ ░░░░░  ░░░ ░░░  ░░░░  ░    ░░  ░░░░░░░ ░░░░ ░░░░  ░░░  ░░  ░░░░  ░░░░░░░ ░░  ░░  ░░   ░░░ ░ 
                                                        ░   ░  ░░░  ░   ░ ░░░░░  ░░░  ░   ░ ░   ░    ░   ░ ░░░░░ ░░░░  ░░░  ░░░  ░   ░ ░   ░ ░░░░░ ░   ░   ░    ░░░  
                )" <<std::endl<<std::endl;
}

void Vista::imprimirEliminar(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  std::cout<<R"( 
                                                      █████ █     ███ █   █ ███ █   █  ███  ████     █   █ █████ ████  ███  ███   ███  █   █ █████ █   █ █████  ███    
                                                      █░░░░░█░     █░░██ ██░ █░░██  █░█ ░░█ █░░░█    ██ ██░█░░░░░█░░░█  █░░█ ░░░ █ ░░█ ██ ██░█░░░░░██  █░ ░█░░░█ ░░█   
                                                      ████░░█░░    █░░█░█ █░░█░░█░█ █░█████░████░░   █░█ █░████░░█░░░█░ █░░█░ ░░░█████░█░█ █░████░░█░█ █░░ █░░░█░ ░█░  
                                                      █░░░░ █░░    █░░█░░░█░░█░░█░░██░█░░░█░█░░█░ ░  █░░░█░█░░░░ █░░ █░░█░░█░░   █░░░█░█░░░█░█░░░░ █░░██░░ █░░ █░░ █░░ 
                                                      █████░█████ ███░█░░ █░███░█░░ █░█░░░█░█░░░█░   █░░ █░█████░████ ░███░ ███  █░░░█░█░░ █░█████░█░░ █░░ █░░  ███ ░░ 
                                                       ░░░░░ ░░░░░ ░░░ ░░  ░░░░░ ░░  ░░░░  ░░░░  ░    ░░  ░░░░░░░ ░░░░ ░░░░  ░░░  ░░  ░░░░  ░░░░░░░ ░░  ░░  ░░   ░░░ ░ 
                                                        ░░░░░ ░░░░░ ░░░ ░   ░ ░░░ ░   ░ ░   ░ ░   ░    ░   ░ ░░░░░ ░░░░  ░░░  ░░░  ░   ░ ░   ░ ░░░░░ ░   ░   ░    ░░░  
              )" <<std::endl<<std::endl;
}

void Vista::imprimirBuscar(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  std::cout<<R"( 
                                                        ████  █   █  ████  ███   ███  ████     █   █ █████ ████  ███  ███   ███  █   █ █████ █   █ █████  ███    
                                                        █░░░█ █░  █░█ ░░░░█ ░░░ █ ░░█ █░░░█    ██ ██░█░░░░░█░░░█  █░░█ ░░░ █ ░░█ ██ ██░█░░░░░██  █░ ░█░░░█ ░░█   
                                                        ████░░█░░ █░░███░░█░ ░░░█████░████░░   █░█ █░████░░█░░░█░ █░░█░ ░░░█████░█░█ █░████░░█░█ █░░ █░░░█░ ░█░  
                                                        █░░░█ █░░ █░░ ░░█ █░░   █░░░█░█░░█░ ░  █░░░█░█░░░░ █░░ █░░█░░█░░   █░░░█░█░░░█░█░░░░ █░░██░░ █░░ █░░ █░░ 
                                                        ████░░ ███ ░████░░ ███  █░░░█░█░░░█░   █░░ █░█████░████ ░███░ ███  █░░░█░█░░ █░█████░█░░ █░░ █░░  ███ ░░ 
                                                         ░░░░ ░ ░░░ ░░░░░ ░ ░░░  ░░  ░░░░  ░    ░░  ░░░░░░░ ░░░░ ░░░░  ░░░  ░░  ░░░░  ░░░░░░░ ░░  ░░  ░░   ░░░ ░ 
                                                          ░░░░   ░░░  ░░░░   ░░░  ░   ░ ░   ░    ░   ░ ░░░░░ ░░░░  ░░░  ░░░  ░   ░ ░   ░ ░░░░░ ░   ░   ░    ░░░  
                  )" <<std::endl<<std::endl;    
}

void Vista::imprimirInventario(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  std::cout<<R"( 
                                                      ███ █   █ █   █ █████ █   █ █████  ███  ████  ███  ███      ███   ███  █   █ ████  █     █████ █████  ███    
                                                       █░░██  █░█░  █░█░░░░░██  █░ ░█░░░█ ░░█ █░░░█  █░░█ ░░█    █ ░░░ █ ░░█ ██ ██░█░░░█ █░    █░░░░░ ░█░░░█ ░░█   
                                                       █░░█░█ █░█░░ █░████░░█░█ █░░ █░░░█████░████░░ █░░█░ ░█░   █░ ░░░█░ ░█░█░█ █░████░░█░░   ████░░░ █░░░█░ ░█░  
                                                       █░░█░░██░░█░█ ░█░░░░ █░░██░░ █░░ █░░░█░█░░█░ ░█░░█░░ █░░  █░░   █░░ █░█░░░█░█░░░░ █░░   █░░░░   █░░ █░░ █░░ 
                                                      ███░█░░ █░░ █ ░ █████░█░░ █░░ █░░ █░░░█░█░░░█░███░ ███ ░░   ███   ███ ░█░░ █░█░░░░░█████ █████░  █░░  ███ ░░ 
                                                       ░░░ ░░  ░░  ░ ░ ░░░░░ ░░  ░░  ░░  ░░  ░░░░  ░ ░░░  ░░░ ░    ░░░   ░░░ ░░░  ░░░░    ░░░░░ ░░░░░   ░░   ░░░ ░ 
                                                        ░░░ ░   ░   ░   ░░░░░ ░   ░   ░   ░   ░ ░   ░ ░░░  ░░░      ░░░   ░░░  ░   ░ ░     ░░░░░ ░░░░░   ░    ░░░  
                )" <<std::endl<<std::endl;  
}

void Vista::imprimirCantidad(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
std::cout<<R"( 
                                                             ███   ███  █   █ ████  ███  ███  ████      ███   ███  █   █ █████ ███ ████   ███  ████    
                                                            █ ░░░ █ ░░█ ██ ██░█░░░█  █░░█ ░░█ █░░░█    █ ░░░ █ ░░█ ██  █░ ░█░░░ █░░█░░░█ █ ░░█ █░░░█   
                                                            █░ ░░░█████░█░█ █░████░░ █░░█████░████░░   █░ ░░░█████░█░█ █░░ █░░░░█░░█░░░█░█████░█░░░█░  
                                                            █░░   █░░░█░█░░░█░█░░░█ ░█░░█░░░█░█░░█░ ░  █░░   █░░░█░█░░██░░ █░░  █░░█░░ █░█░░░█░█░░ █░░ 
                                                             ███  █░░░█░█░░ █░████░░███░█░░░█░█░░░█░    ███  █░░░█░█░░ █░░ █░░ ███░████ ░█░░░█░████ ░░ 
                                                              ░░░  ░░  ░░░░  ░░░░░░ ░░░░ ░░  ░░░░  ░     ░░░  ░░  ░░░░  ░░  ░░  ░░░ ░░░░ ░░░  ░░░░░░ ░ 
                                                               ░░░  ░   ░ ░   ░ ░░░░  ░░░ ░   ░ ░   ░     ░░░  ░   ░ ░   ░   ░   ░░░ ░░░░  ░   ░ ░░░░  
                             )" <<std::endl<<std::endl;  
}


void Vista::mostrarInventario(Inventario& auxCatalogo) {
        std::string titulos[6]={"Nombre","ID","Presentación","Cantidad","Costo","Precio"};
        std::cout<<"El catalogo es: "<<
        std::endl;
 
          std::cout<<"----------------------------------------------------------------------------------------------------------------------------------\t"<<std::endl;
          
          for(int i = 0; i < 6;i++){
            std::cout<<"\t"<<titulos[i]<<"\t | ";
          }
          std::cout<<std::endl;
          std::cout<<"----------------------------------------------------------------------------------------------------------------------------------\t"<<std::endl;
        
          int size = auxCatalogo.getSize();
          for (int i = 0; i < size; i++ ){
              
	      //Algunos cout tienen if, que depende que tan grande sea la palabra, imprime diferente para mantener la integridad de la tabla/matriz
	      if(auxCatalogo.getMedicamento(std::to_string(i)).getNombreMedicamento().size() > 7){
	        std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getNombreMedicamento()<<" | ";
	      }
	      else{
	        std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getNombreMedicamento()<<"\t | ";
	      }

              std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getIDMedicamento()<<"\t | ";
              
              if(auxCatalogo.getMedicamento(std::to_string(i)).getPresentacionMedicamento().size() > 7){
	        std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getPresentacionMedicamento()<<"\t | ";
	      }
	      else{
	        std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getPresentacionMedicamento()<<"\t\t | ";;
	      }
              
              std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getCantidadMedicamento()<<"\t\t | ";
              
              std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getCostoCompraMedicamento()<<"\t | ";
              
              std::cout<<"\t"<<auxCatalogo.getMedicamento(std::to_string(i)).getPrecioVentaMedicamento()<<"\t | "<<std::endl;
          
          }
        std::cout<<"----------------------------------------------------------------------------------------------------------------------------------\t"<<std::endl;
        std::cout<<"Actualizado el: "<<auxCatalogo.getFecha()<<std::endl;
}
        
void Vista::imprimirMedicamento(const Inventario& auxCatalogo, int ID){
        Medicamento med = auxCatalogo.getMedicamento(ID);//Busca un medicamento según un ID dado, y trae sus datos
        if(!(med.getNombreMedicamento()=="")){//La condición evita imprimir un objeto med vacío
          std::cout<<std::endl;
          std::cout<<"_______________________"<<std::endl<<std::endl;
          std::cout<<"Nombre: ";
          std::cout<<"\t"<<med.getNombreMedicamento()<<std::endl;
          std::cout<<"Presentación: ";
          std::cout<<"\t"<<med.getPresentacionMedicamento()<<std::endl;
          std::cout<<"Cantidad: ";
          std::cout<<"\t"<<med.getCantidadMedicamento()<<std::endl;
          std::cout<<"Costo: ";
          std::cout<<"\t\t"<<med.getCostoCompraMedicamento()<<std::endl;
          std::cout<<"Venta: ";
          std::cout<<"\t\t"<<med.getPrecioVentaMedicamento()<<std::endl;
          std::cout<<"________________________"<<std::endl;
        }
}

