#include <stdio.h>
#include "nascimento.h"


int main(){
    data_t nasc;
    printf("Dia do seu nascimento: ");
    scanf("%d", &nasc.dia);
    printf("Mes do seu nascimento: ");
    scanf("%d", &nasc.mes);
    printf("Ano do seu nascimento: ");
    scanf("%d", &nasc.ano);

    int dias = dias_de_vida(nasc);
    printf("Voce viveu %d dias.\n", dias);
    
    return 0;
}
