#include <stdio.h>
#include <conio.h>
#include <locale.h>


char nome[40] ;
int primeiro, b, c, d, e, recomeco, ife = 0;



main() {

setlocale(LC_ALL, "");

printf ("Me conte seu nome, aventureiro \n");
    gets (nome);
    printf ("Seja bem-vindo, %s \n",nome);

comeco();

if(ife == 1) {



do {

    printf ("Você morreu! \n");
    printf ("Deseja tentar novamente? \n");
    printf ("(1)SIM   (2)NÃO \n");
    scanf ("%i", &recomeco);

        switch(recomeco){
    case 1:
        printf ("\n");
        comeco();
        ife = 0;
    break;

    case 2:
        printf ("Covarde \n");
        recomeco = 0;
    break;
    } //SWITCH
} // DO
while(recomeco == 1);




} // IF

} // MAIN

int comeco() {

    //------------

    printf ("Você acorda no chão de uma caverna fria \n");
    printf ("Ao seu redor é possível ver alguns esqueletos, uma tocha com uma brasa ainda brilhante, e uma pedra achatada \n");
    printf ("Qual deles deseja pegar? (1)Osso (2)Tocha (3)Pedra \n");
    scanf ("%i", &primeiro);

switch (primeiro) {

case 1:
    printf ("Você agarra o fêmur de um esqueleto qualquer, parece que pode servir como uma boa arma \n");
    ife = 0;
break;

case 2:
    printf ("broxa \n");
    ife = 1;
break;





} // SWITCH



} // INT COMECO





