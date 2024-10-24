#include <stdio.h>
#include <time.h>
#include "nascimento.h"

int dias_de_vida(data_t nasc){
    time_t agr = time(NULL);

    struct tm tempo = {0};
        tempo.tm_mday = nasc.dia;
        tempo.tm_mon = nasc.mes - 1;
        tempo.tm_year = nasc.ano - 1900;
        tempo.tm_isdst = -1;

    double dif = difftime(agr, mktime(&tempo)); 
    return (int)dif / (60 * 60 *24);
}