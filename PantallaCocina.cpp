//
// Created by Alan Ruiz on 10/11/24.
//

#include "PantallaCocina.h"
#include <iostream>
using namespace std;

void PantallaCocina::mostrarPedido(Pedido pedido) {
  cout << "Mostrando en cocina pedido para mesa " << pedido.obtenerNumeroMesa() << ": " << pedido.obtenerDetalles() << endl;
}

