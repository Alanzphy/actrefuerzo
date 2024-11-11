//
// Created by Alan Ruiz on 10/11/24.
//

#ifndef CAJA_H
#define CAJA_H

#include "Mesa.h"
#include "Pedido.h"
using namespace std;

class Caja {
public:
  void registrarPedido(Pedido pedido);
  string generarFactura(Mesa mesa);
};

#endif

