/*
Autor: Laura Farias
Descrição: Resolução do Problema I da edição de 2025 da Maratona de Programação Interfatecs
*/

#include <stdio.h>

//Seção de prototipação
void Sorteio(int, int);

int main()
{

    int q, thy, mar;

    scanf("%d", &q);

    for(int i = 0; i < q; i++)
    {
        scanf("%d", &thy);
        scanf("%d", &mar);

        Sorteio(thy, mar);

    }

}//Fim do programa

void Sorteio(int thy, int mar)
{

    if(thy > mar && (thy + mar) > 40)
        printf("DOROTHY DECIDE E A NONNA VAI");
    else if(thy > mar && (thy + mar) <= 40)
        printf("DOROTHY DECIDE");
    else if(thy < mar && (thy + mar) > 40)
        printf("DAGMAR DECIDE E A NONNA VAI");
    else if(thy < mar && (thy + mar) <= 40)
        printf("DAGMAR DECIDE");

}