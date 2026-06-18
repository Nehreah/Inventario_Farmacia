#include "Inventario.h"
#include <iostream>
#include <vector>
#include <string>
#include "Medicamento.h"




Inventario::Inventario (){
}

void Inventario::agregarMedicamento(const Medicamento& auxMedicamento){
  medicamentos.push_back(auxMedicamento);
  std::cout<<std::endl;
}
void Inventario::setFecha(const std::string& auxFecha){
  fecha = auxFecha;
}

std::string Inventario::getFecha() const{
  return fecha;
}


//getters
Medicamento Inventario::getMedicamento(int IDBuscado) const{
    for (const auto &med: medicamentos){
      if (med.getIDMedicamento()==IDBuscado){
       return med;
      }
    }
    std::cout<<"No hay ningún medicamento con ese ID."<<std::endl;
    return Medicamento();
}

Medicamento Inventario::getMedicamento(std::string i) const{
      return medicamentos[std::stoi(i)];
}



void Inventario::eliminarMedicamento(int IDBuscado){
  int contador = 0;
  for (int i = 0; i < medicamentos.size(); i++){
    if(medicamentos[i].getIDMedicamento() == IDBuscado){
      contador=+ 1;
      medicamentos.erase(medicamentos.begin()+i);
    }
  }
  if(contador==0){
  std::cout<<"No hay ningún medicamento con ese ID"<<std::endl;
  }
}


bool Inventario::cambiarCantidad(int IDBuscado, int cantidad){//cambiarlo a booleano
    for(int i = 0; i< medicamentos.size(); i++){
      if (medicamentos[i].getIDMedicamento() == IDBuscado){
        medicamentos[i].setCantidad(cantidad);
        std::cout<<"Se ha cambiado el medicamento con ID: "<<IDBuscado<<std::endl;
        return true;
      }
    }
    std::cout<<"No se ha encontrado el medicamento"<<std::endl;
    return false;
}


int Inventario::getSize(){
  return medicamentos.size();
}

