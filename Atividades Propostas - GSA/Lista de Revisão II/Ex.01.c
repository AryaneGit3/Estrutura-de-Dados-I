// EXERC�CIO: Considerando uma lista encadeada, implemente a fun��o: pesquisa() retornando 1 se o dado foi
//encontrada e 0, caso contr�rio. 

#include <stdio.h>

int pesquisa(tno* v, int dado) {
    tno* t = vet;

    while (t != NULL) {
        if (t->dado == dado) {
            return 1;
        }
        t = t->prox;
    }

    return 0;
}
