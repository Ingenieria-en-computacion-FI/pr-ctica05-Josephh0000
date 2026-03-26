#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bicola.h" 

Bicola* bicola_crear() {
    return lista_crear();
}

bool bicola_vacia(Bicola* bicola) {
        return lista_vacia(bicola);
}

void bicola_enqueue_head(Bicola* bicola, int dato) {
    lista_insertar_head(bicola, dato);
}

void bicola_enqueue_tail(Bicola* bicola, int dato) {
        lista_insertar_tail(bicola, dato);

}

int bicola_dequeue_head(Bicola* bicola) {
        return lista_eliminar_head(bicola);
}

int bicola_dequeue_tail(Bicola* bicola) {
         return lista_eliminar_tail(bicola);

}

int bicola_head(Bicola* bicola) {
    if (bicola_vacia(bicola)) return -1;
    return bicola->tail->dato;
}

int bicola_tail(Bicola* bicola) {
    if (bicola_vacia(bicola)) return -1;
        return bicola->tail->dato;
}

void bicola_destruir(Bicola* bicola) {
      lista_destruir(bicola);
}