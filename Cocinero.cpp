//
// Created by Alan Ruiz on 10/11/24.
//

#include "Cocinero.h"
#include <iostream>
using namespace std;

Cocinero::Cocinero(string nombre) : nombre(nombre) {}

void Cocinero::prepararPedido(Pedido& pedido) {
  cout << "Preparando pedido para mesa " << pedido.obtenerNumeroMesa() << endl;
}

void Cocinero::marcarPedidoListo(Pedido& pedido) {
  pedido.actualizarEstado("listo");
  cout << "Pedido listo para mesa " << pedido.obtenerNumeroMesa() << endl;
}

