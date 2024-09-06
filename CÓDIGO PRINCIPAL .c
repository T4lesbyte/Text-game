#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>


char nome[40] ;
int primeiro, seg, ter, quar, quinto, recomeco, opva;
bool a; // começa como false

main() {

    setlocale(LC_ALL, "");

    printf ("Me conte seu nome, aventureiro \n");
    gets (nome);
    printf ("\n Seja bem-vindo, %s \n \n",nome);

    comeco();

} // MAIN

int morreu(){

    printf ("Você morreu! \n");
    printf ("Deseja tentar novamente? \n");
    printf ("(1)SIM   (2)NÃO \n");
    scanf ("%i", &recomeco);

    switch(recomeco){
        case 1:
            printf ("\n");
            comeco();
            recomeco = 0;
        break;

        case 2:
            printf ("Covarde \n");
            recomeco = 1;
            exit(0);
        break;
            } //SWITCH

        while(recomeco == 1);



} // MORREU

int comeco() {

    //------------
    //a = false;

    printf ("Você acorda no chão de uma masmorra fria \n");
    printf ("Ao seu redor é possível ver uma adaga enferrujada, uma tocha com uma brasa ainda brilhante, e um molho de chaves \n");
    printf ("Qual deles deseja pegar? (1)Adaga enferrujada (2)Tocha (3)Chaves \n");
    scanf ("%i", &primeiro);

do {
 int opva = 0;
        switch (primeiro) {
            case 1:
                printf ("Você pega a adaga, parece que uma parte da lâmina ainda manteve seu fio. \n");
                a = false; // 0
                opva = 1;
            break;

            case 2:
                printf ("Você pega a tocha, o calor remanescente naquela brasa esquenta seu rosto. \n");
                a = false; // 1
                opva = 1;
            break;

            case 3:
                printf ("Você pega as chaves no chão, todas são iguais. \n");
                a = false;
                opva = 1;
            break;

            default:
                printf("Não é uma resposta válida.");
            break;
        } // SWITCH
} // DO
while (!opva);
    printf ("\n A sua frente existe uma porta aberta");
    printf ("\n Deseja passar por ela? (1)SIM (2)NÃO");
    scanf ("%i",seg);





} // INT COMECO
