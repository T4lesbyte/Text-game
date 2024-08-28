#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>


char nome[40] ;
int primeiro, seg, ter, quar, quinto, recomeco;
bool a; // começa como false

main() {

    setlocale(LC_ALL, "");

    printf ("Me conte seu nome, aventureiro \n");
    gets (nome);
    printf ("Seja bem-vindo, %s \n",nome);

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

    printf ("Você acorda no chão de uma caverna fria \n");
    printf ("Ao seu redor é possível ver alguns esqueletos, uma tocha com uma brasa ainda brilhante, e uma pedra achatada \n");
    printf ("Qual deles deseja pegar? (1)Osso (2)Tocha (3)Pedra \n");
    scanf ("%i", &primeiro);

    switch (primeiro) {
        case 1:
            printf ("Você agarra o fêmur de um esqueleto qualquer, parece que pode servir como uma boa arma \n");
            a = false; // 0
        break;

        case 2:
            printf ("broxa \n");
            a = true; // 1
            morreu();
        break;

    } // SWITCH

} // INT COMECO
