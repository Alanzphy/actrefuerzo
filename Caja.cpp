//
// Created by Alan Ruiz on 10/11/24.
//

#include "Caja.h"
#include <iostream>
using namespace std;

void Caja::registrarPedido(Pedido pedido) {
  cout << "Pedido registrado para mesa " << pedido.obtenerNumeroMesa() << endl;
}

string Caja::generarFactura(Mesa mesa) {
  return "Factura generada para mesa " + to_string(mesa.obtenerNumero());
}

