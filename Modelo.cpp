#include <vector>
#include <fstream>
#include <sstream>
#include "Inventario.h"
#include "Medicamento.h"
#include "Modelo.h"

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>

//std::string nombreArchivo;



Modelo::Modelo(){
}

void Modelo::cargarArchivo(){//Extrae lineas de un archivo, y las asigna a las variables locales. Luego se crea un objeto con estos parámetros locales. al final agrega el objeto a un inventario.
  std::string nombre;
  std::string presentacion;
  std::string fecha;
  int cantidad;
  double costo;
  double precio;
  int ID;
  std::ifstream archivo("data.txt");
  std::string auxMed;
  while(std::getline(archivo,auxMed)){//AuxMed es un string que guarda toda una linea del archivo, dice "Mientras getline le siga pasando lineas del archivo a auxMed, mantenga esta condición".
      std::stringstream med(auxMed);//Acá auxMed se transforma en med un stream, con stringstream. 
      std::string aux;//aux para los números.
      
      getline(med,nombre,',');
      getline(med,presentacion,',');
      getline(med,aux,',');
      cantidad = std::stoi(aux);
      getline(med,aux,',');
      costo = std::stod(aux);
      getline(med,aux,',');
      precio =std::stod(aux);
      getline(med,aux,',');
      ID = std::stoi(aux);
      getline(med,fecha,',');
      catalogo.setFecha(fecha);
      Medicamento droga(nombre, presentacion, cantidad, costo, precio, ID);//Crea objeto
      catalogo.agregarMedicamento(droga);//Agrega objeto al catalogo
  }
  
  archivo.close();
}

void Modelo::guardarArchivo(){
  std::string nombre;
  std::string presentacion;
  std::string fecha;
  int cantidad;
  double costo;
  double precio;
  int ID;
  std::ofstream archivo("data.txt",std::ios::app);//Inicializa el archivo y esto le dice a la app que no sobrescriba el archivo y mantenga todo lo que tiene dentro.
  int size = catalogo.getSize();
  for(int i = 0; i < size; i++){//dejo que pase todo el for para que itere hasta el final del vector o inventario. cuando llegué al final, ese será el único medicamento que actualizará.
    Medicamento med =  catalogo.getMedicamento(std::to_string(i));
    nombre = med.getNombreMedicamento();
    presentacion = med.getPresentacionMedicamento();
    cantidad = med.getCantidadMedicamento();
    costo = med.getCostoCompraMedicamento();
    precio = med.getPrecioVentaMedicamento();
    ID = med.getIDMedicamento();
    }//final
  fecha = catalogo.getFecha();//extrae una fecha
  archivo<<nombre<<","<<presentacion<<","<<cantidad<<","<<costo<<","<<precio<<","<<ID<<","<<fecha<<std::endl;//Agrega ahora sí a archivo, los datos del final del vector o inventario. Actualizando el archivo.
  archivo.close();//finaliza el archivo
}




void Modelo::actualizarArchivo(){
  std::string nombre;
  std::string presentacion;
  std::string fecha;
  int cantidad;
  double costo;
  double precio;
  int ID;
  std::ofstream archivo("data.txt");//Acá no abro el archivo con std::ios::app por lo que este sí va a sobrescribir todo adentro.
  int size = catalogo.getSize();
  for(int i = 0; i < size; i++){//dejo que pase todo el for para que itere hasta el final del vector o inventario.
    Medicamento med =  catalogo.getMedicamento(std::to_string(i));    
    nombre = med.getNombreMedicamento();
    presentacion = med.getPresentacionMedicamento();
    cantidad = med.getCantidadMedicamento();
    costo = med.getCostoCompraMedicamento();
    precio = med.getPrecioVentaMedicamento();
    ID = med.getIDMedicamento();
    fecha = catalogo.getFecha();
    archivo<<nombre<<","<<presentacion<<","<<cantidad<<","<<costo<<","<<precio<<","<<ID<<","<<fecha<<std::endl;
  }
  archivo.close();
}



void Modelo::agregarMedicamento(){
  std::string nombre;
  std::string presentacion;
  std::string fecha;
  int cantidad;
  double costo;
  double precio;
  int ID;

  std::cout<<"Ingrese el ID del medicamento"<<std::endl;
  std::cin>>ID;
  std::cin.ignore();  
  std::cout<<"Ingrese el nombre del medicamento"<<std::endl;
  getline(std::cin, nombre);
  
  std::cout<<"Ingrese la presentación del medicamento"<<std::endl;
  getline(std::cin, presentacion);
    
  std::cout<<"Ingrese la cantidad del medicamento"<<std::endl;
  std::cin>>cantidad;
  
  std::cout<<"Ingrese el costo de compra del medicamento"<<std::endl;
  std::cin>>costo;
  
  std::cout<<"Ingrese el precio de venta del medicamento"<<std::endl;
  std::cin>>precio;
  
  Medicamento droga(nombre, presentacion, cantidad, costo, precio, ID);
  catalogo.agregarMedicamento(droga);
  
  std::cout<<"Fecha de actualización: "<<std::endl;
  std::cin.ignore();
  std::getline(std::cin,fecha);
  catalogo.setFecha(fecha);
}




void Modelo::cambiarCantidad(int ID,int cantidad){   
  catalogo.cambiarCantidad(ID,cantidad);
}

Inventario& Modelo::getCatalogo(){
  return catalogo;
}

