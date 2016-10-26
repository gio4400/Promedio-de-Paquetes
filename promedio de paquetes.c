#include<stdio.h>
#include<stdlib.h>
int main()
{
    int paq, paquete=0, dia=0;
    float prom;
    char op;
    system("color F9");
    fflush (stdin);
    printf("\n\t Programa promedios de paquetes por dia \n");
    do
    {
        dia ++;
        printf("\n\t Ingrese paquetes entregados en un dia\t");
        scanf("%i",&paq);
        paquete += paq;
        fflush(stdin);
        printf("\n\t Desea ingresar otra cantidad? s/n \t");
        scanf("%c",&op);
    }
    while (op !='n' && op != 'N');
    fflush (stdin);
    printf("\n\t Fin del ciclo\n");
    prom=(float)paquete/dia;
    printf("\n\t El total de paquetes entregados fue %i \n\n",paquete);
    printf("\n\t El promedio de paquetes entregados por dia fue %f \n\n",prom);
    system("PAUSE");
    return 0;
}
