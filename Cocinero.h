//
// Created by Alan Ruiz on 10/11/24.
//

#ifndef COCINERO_H
#define COCINERO_H

#include <string>
#include "Pedido.h"
using namespace std;

class Cocinero {
  string nombre;
public:
  Cocinero(string nombre);
  void prepararPedido(Pedido& pedido);
  void marcarPedidoListo(Pedido& pedido);
};

#endif

