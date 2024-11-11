## **Descripción de cada clase**

**Mesa**: representa una mesa en el restaurante. Tiene como metodo `obtenerNumero()` que devuelve el número de la mesa.

**Pedido**: representa el pedido hecho en una mesa. Tiene atributos como el número de la mesa, detalles de la orden y el estado del pedido (pendiente, en preparación, listo, entregado). Tiene métodos como `actualizarEstado()` y `obtenerDetalles()` permitiendo cambiar el estado del pedido y obtener los detalles del pedido.

**Camarero**: representa al camarero. Los métodos son `tomarOrden()`, que registra el pedido de los clientes, `registrarPago()`, que realiza el proceso de pago, y `eliminarPedidoPantalla()`, que retira el pedido de la pantalla cuando se entrega.

**Cocinero**: representa al cocinero en la cocina. Tiene métodos como `prepararPedido()` y `marcarPedidoListo()` que permiten al cocinero cambiar el estado del pedido cuando está en proceso de preparación y marcarlo como listo.

**Caja**: representa el sistema de caja del restaurante. Los métodos son `registrarPedido()`, para registrar un pedido en el sistema, y `generarFactura()`, para imprimir la factura cuando el cliente ha terminado de comer.

**PantallaCocina**: muestra los pedidos que deben ser preparados. El método `mostrarPedido()` permite al cocinero ver los pedidos actuales.

**PantallaPedidosListos**: muestra los pedidos listos para ser recogidos por los camareros. Tiene métodos como `mostrarPedidoListo()` y `eliminarPedido()` que permiten mostrar un pedido como listo y eliminarlo cuando ya fue entregado.

**ElevadorAlimentos**: representa el elevador de alimentos que se usa para enviar los pedidos listos desde la cocina al área de servicio. Tiene el método `colocarBandeja()` para colocar la bandeja en el elevador.

## **Relaciones entre Clases**

*   **Cocinero** y **PantallaCocina**:

    *   La clase `PantallaCocina` muestra los pedidos para el `Cocinero`, por lo que el `Cocinero` puede tener una relación con `PantallaCocina` para acceder y ver los pedidos en la pantalla.

*   **PantallaPedidosListos** y **Camarero**:

    *   `PantallaPedidosListos` muestra los pedidos listos para que el `Camarero` los recoja, representando una relación entre ambas clases.

*   **Caja** y **Pedido**:

    *   La clase `Caja` registra los pedidos, por lo que hay una relación entre `Caja` y `Pedido`. También genera la factura una vez que el `Camarero` indica que la mesa ha finalizado.

*   **ElevadorAlimentos** y **Pedido**:

    *   `ElevadorAlimentos` se usa para colocar las bandejas de pedidos listos, lo que representa una relación con `Pedido` para que el cocinero coloque los pedidos en el elevador.