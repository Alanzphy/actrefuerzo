#include "Mesa.h"
#include "Pedido.h"
#include "Camarero.h"
#include "Cocinero.h"
#include "Caja.h"
#include "PantallaCocina.h"
#include "PantallaPedidosListos.h"
#include "ElevadorAlimentos.h"
#include <iostream>
using namespace std;

int main() {
  Mesa mesa1(1);
  Pedido pedido1(mesa1.obtenerNumero(), "Hamburguesa y papas");

  Camarero camarero("Juan");
  Cocinero cocinero("Luis");
  Caja caja;
  PantallaCocina pantallaCocina;
  PantallaPedidosListos pantallaPedidosListos;
  ElevadorAlimentos elevador;

  // El camarero toma la orden
  camarero.tomarOrden(pedido1);
  caja.registrarPedido(pedido1);

  // El pedido se muestra en la cocina
  pantallaCocina.mostrarPedido(pedido1);

  // El cocinero prepara y marca el pedido como listo
  cocinero.prepararPedido(pedido1);
  cocinero.marcarPedidoListo(pedido1);

  // El pedido se muestra en la pantalla de pedidos listos
  pantallaPedidosListos.mostrarPedidoListo(mesa1);
  elevador.colocarBandeja();

  // El camarero recoge el pedido y elimina de la pantalla
  camarero.eliminarPedidoPantalla(mesa1);

  // Finaliza el pedido y registra el pago
  cout << caja.generarFactura(mesa1) << endl;
  camarero.registrarPago(mesa1);

  return 0;
}
