#ifndef BICOLA_H
#define BICOLA_H

#include <stdbool.h>
#include "../lista/lista.h"

typedef Lista Bicola;

Bicola* bicola_crear();

bool bicola_vacia(Bicola* bicola);

void bicola_enqueue_head(Bicola* bicola, int dato);

void bicola_enqueue_tail(Bicola* bicola, int dato);

int bicola_dequeue_head(Bicola* bicola);

int bicola_dequeue_tail(Bicola* bicola);

int bicola_head(Bicola* bicola);

int bicola_tail(Bicola* bicola);

void bicola_destruir(Bicola* bicola);

#endif
