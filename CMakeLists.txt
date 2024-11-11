cmake_minimum_required(VERSION 3.29)
project(Actrefuerzo)

set(CMAKE_CXX_STANDARD 20)

add_executable(Actrefuerzo main.cpp
        Mesa.cpp
        Mesa.h
        Pedido.cpp
        Pedido.h
        Camarero.cpp
        Camarero.h
        Cocinero.cpp
        Cocinero.h
        Caja.cpp
        Caja.h
        PantallaCocina.cpp
        PantallaCocina.h
        PantallaPedidosListos.cpp
        PantallaPedidosListos.h
        ElevadorAlimentos.cpp
        ElevadorAlimentos.h)
