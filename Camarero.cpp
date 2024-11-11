//
// Created by Alan Ruiz on 10/11/24.
//

#include "Camarero.h"
#include <iostream>
using namespace std;

Camarero::Camarero(string nombre) : nombre(nombre) {}

void Camarero::tomarOrden(Pedido& pedido) {
  cout << "Orden tomada para mesa " << pedido.obtenerNumeroMesa() << endl;
}

void Camarero::registrarPago(Mesa& mesa) {
  cout << "Pago registrado para mesa " << mesa.obtenerNumero() << endl;
}

void Camarero::eliminarPedidoPantalla(Mesa& mesa) {
  cout << "Pedido eliminado de la pantalla para mesa " << mesa.obtenerNumero() << endl;
}

