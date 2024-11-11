//
// Created by Alan Ruiz on 10/11/24.
//

#include "PantallaPedidosListos.h"
#include <iostream>
using namespace std;

void PantallaPedidosListos::mostrarPedidoListo(Mesa mesa) {
  cout << "Pedido listo para mesa " << mesa.obtenerNumero() << endl;
}

void PantallaPedidosListos::eliminarPedido(Mesa mesa) {
  cout << "Pedido eliminado de la pantalla para mesa " << mesa.obtenerNumero() << endl;
}

