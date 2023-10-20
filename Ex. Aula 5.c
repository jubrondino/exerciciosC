#include<stdio.h>
#include<stdlib.h>

//OBS.: Todos os programa devem ser finalizados pelo usuario.
#define ex1

#ifdef ex1
/*1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Fa�a uma
    funcao para compara-las e retorne como resultado se s�o IGUAIS 1 ou se
    DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
    (Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)*/
    char string1[10],string2[10];

    int compara(){

    for(int contador=0;string1[contador]!='\0' || string2[contador]!='\0';contador++){
        if(string1[contador]!=string2[contador]){return 0;}}
        return 1;}


    int main(){
    int opcao,qtd1=0,qtd2=0;
    while(1){

    while(1){
    printf("\nDigite duas frases/palavras de ate 10 letras:\nPrimeira frase: ");
    gets(string1);
    for(int contador=0;string1[contador]!='\0';contador++){
        qtd1++;}
    printf("\nSegunda frase: ");
    gets(string2);
    for(int contador=0;string2[contador]!='\0';contador++){
        qtd2++;}
    if(qtd1>10||qtd2>10||qtd1==0||qtd2==0){
    printf("\a\n\nA primeira frase tem %d caracteres e a segunda frase %d caracteres.Precisam ter de 1 a 10 caracteres.",qtd1,qtd2);
    qtd1=0;
    qtd2=0;}
    else{break;}
    }
    int resultado=compara();

    if (resultado==1){
        printf("\n\nAs strings digitadas sao iguais.");}
    else{printf("\n\nAs strings digitadas sao diferentes\n");}

    while(1){
    printf("\n\nDeseja continuar?\n1-SIM\n2-NAO\n->");
    scanf("%d",&opcao);

    if(opcao==1){
        qtd1=0;
        qtd2=0;
        getchar();
        break;}
    else if(opcao==2){printf("\nAte mais");exit(0);}
    else{printf("\n\nOpcao invalida. Tente novamente.\n");}}}

    return 0;}

#endif//ex1

#ifdef ex2
/*2 - Escreva um programa para receber 5 nomes, com at� 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
    globais)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
    char nomes[5][7];

    void entrada_de_dados(){

    printf("\nDigite 5 nomes com ate 7 letras:");
    for(int contador=0;contador<5;contador++){
    printf("\n%do nome: ",contador+1);
    gets(nomes[contador]);}

    return 0;}

    int main(){
    int opcao;
    while(1){
    entrada_de_dados();

    for(int contador=0;contador<3;contador++){
        printf("\n%*s", 3 + contador * 10, nomes[contador]);
        if(contador<2){
        printf("%*s",43-contador*20,nomes[4-contador]);}}

        while(1){
            printf("\nO que deseja fazer agora?\n1-Sair\n2-Continuar\n->");
            scanf("%d",&opcao);
            if (opcao==1){printf("\n\nAte logo.");exit(0);}
            else if(opcao==2){getchar();break;}
            else{printf("\n\n\aOpcao invalida.");}}
    }

    return 0;}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa que receba uma string na funcao main(). Faca uma funcao que
    calcula o comprimento de uma string recebida via teclado. Mostre o valor do
    comprimento na funcao main().
    (Declare o vetor como variavel global) (nao pode usar funcao de biblioteca)*/

    char string[];

    int comprimento(){
    int qtd_letras=0,contador=0;
    for (contador = 0; string[contador] != '\0'; contador++) {
      qtd_letras++;}
    return qtd_letras;}


    int main(){
    int opcao;
    while(1){
    printf("\nDigite uma palavra ou frase: ");
    gets(string);
    int qtd_letras=comprimento();
    printf("\n\nO comprimento da frase/palavra %s e %d",string,qtd_letras);

    while(1){
    printf("\n\nO que seja fazer agora?\n1-Continuar\n2-Sair\n->");
    scanf("%d",&opcao);
    if(opcao==1){getchar();break;}
    else if(opcao==2){printf("\nAte logo.");exit(0);}
    else{printf("\n\aOpcao invalida.");}
    }}
    return 0;}

#endif // ex3

#ifdef ex4
/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas. (nao pode usar funcao de biblioteca)
*/
int main(){
char caracteres[10],maiuscula[10];
int opcao,qtd=0;

while(1){
while(1){
printf("\nDigite uma frase/palara de ate 10 caracteres: ");
gets(caracteres);
for(int contador=0;caracteres[contador]!='\0';contador++){
        qtd++;}
if(qtd>0 && qtd<10){
    break;}
else{
printf("\n\aERRO!O numero de caracteres da frase/palavra que voce digitou tem %d letras.\nTente novamente.",qtd);
qtd=0;}}
for(int contador=0;caracteres[contador]!='\0';contador++){
    if (caracteres[contador]>='a' && caracteres[contador]<='z'){
        maiuscula[contador]=caracteres[contador]-32;}
    else{
        maiuscula[contador]=caracteres[contador];}}

printf("\n\nPalavra digitada: %s\n\nPalavra em maiuscula: %s\n\n",caracteres,maiuscula);

  while(1){
    printf("\n\nO que seja fazer agora?\n1-Continuar\n2-Sair\n->");
    scanf("%d",&opcao);
    if(opcao==1){
    getchar();
    for(int contador=0;contador<qtd;contador++){
    maiuscula[contador]='\0';}
    qtd=0;
    break;}
    else if(opcao==2){printf("\nAte logo.");exit(0);}
    else{printf("\n\aOpcao invalida.");}
    }
}
return 0;}




#endif // ex4

#ifdef ex5
/*5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas. (nao pode usar funcao de biblioteca)*/

int main(){
char caracteres[10],minuscula[10];
int opcao,qtd=0;

while(1){
while(1){
printf("\nDigite uma frase/palara de ate 10 caracteres: ");
gets(caracteres);
for(int contador=0;caracteres[contador]!='\0';contador++){
        qtd++;}
if(qtd>0 && qtd<10){
    break;}
else{printf("\n\aERRO!O numero de caracteres da frase/palavra que voce digitou tem %d letras.\nTente novamente.",qtd);
qtd=0;}}
for(int contador=0;caracteres[contador]!='\0';contador++){
    if (caracteres[contador]>='A' && caracteres[contador]<='Z'){
        minuscula[contador]=caracteres[contador]+32;}
    else{
        minuscula[contador]=caracteres[contador];}}

printf("\n\nPalavra digitada: %s\n\nPalavra em minuscula: %s\n\n",caracteres,minuscula);

  while(1){
    printf("\n\nO que seja fazer agora?\n1-Continuar\n2-Sair\n->");
    scanf("%d",&opcao);
    if(opcao==1){
    getchar();
    for(int contador=0;contador<qtd;contador++){
    minuscula[contador]='\0';}
    qtd=0;
    break;}
    else if(opcao==2){printf("\nAte logo.");exit(0);}
    else{printf("\n\aOpcao invalida.");}}
}
return 0;}




#endif // ex5
