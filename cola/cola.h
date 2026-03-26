#ifndef COLA_H
#define COLA_H

#include "../lista/lista.h"

typedef Lista Cola;

Cola* cola_crear();

int cola_vacia(Cola* cola);

void cola_enqueue(Cola* cola, int dato);

int cola_dequeue(Cola* cola);

int cola_frente(Cola* cola);

void cola_destruir(Cola* cola);

#endif