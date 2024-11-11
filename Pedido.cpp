//
// Created by Alan Ruiz on 10/11/24.
//

#include "Pedido.h"
using namespace std;

Pedido::Pedido(int numeroMesa, std::string detalles)
    : numeroMesa(numeroMesa), detalles(detalles), estado("pendiente") {}

void Pedido::actualizarEstado(std::string nuevoEstado) {
  estado = nuevoEstado;
}

string Pedido::obtenerDetalles() const {
  return detalles;
}

int Pedido::obtenerNumeroMesa() const {
  return numeroMesa;
}
