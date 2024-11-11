//
// Created by Alan Ruiz on 10/11/24.
//

#ifndef CAMARERO_H
#define CAMARERO_H

#include <string>
using namespace std;
#include "Mesa.h"
#include "Pedido.h"


class Camarero {
  string nombre;
public:
  Camarero(string nombre);
  void tomarOrden(Pedido& pedido);
  void registrarPago(Mesa& mesa);
  void eliminarPedidoPantalla(Mesa& mesa);
};

#endif

