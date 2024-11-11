//
// Created by Alan Ruiz on 10/11/24.
//

#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
using namespace std;

class Pedido {
  int numeroMesa;
  string detalles;
  string estado;
public:
  Pedido(int numeroMesa, string detalles);
  void actualizarEstado(string nuevoEstado);
  string obtenerDetalles() const;
  int obtenerNumeroMesa() const;
};

#endif

