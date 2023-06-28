//EXERCÍCIO: Crie uma função recursiva para converter um valor decimal para binário utilizando recursividade.

#include <stdio.h>

void binario(int dec) {
    if (dec > 0) {
        binary(dec / 2);
        printf("%d", dec % 2);
    }
}
