#include<stdio.h>
#include<stdlib.h>

#define ex5

#ifdef ex1
/*Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de ordem impar
    e o outro tera´ as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}.*/

int main(){
int vetor[10],contador,qtdU=0,qtdW=0,vetorU[5],vetorW[5];

printf("\nDigite 10 numeros inteiros para serem armazenados no vetor principal.\n");
for (contador=0;contador<10;contador++){
    printf("\n->%do numero: ",contador+1);
    scanf("%d",&vetor[contador]);
    if (contador%2==0){
        vetorU[qtdU]=vetor[contador];
        qtdU++;}
    else{
        vetorW[qtdW]=vetor[contador];
        qtdW++;}
}
printf("\n\nVetor W= ");
    for(contador=0;contador<qtdW;contador++){
        printf("%d ",vetorW[contador]);}

printf("\n\nVetor U= ");
    for(contador=0;contador<qtdU;contador++){
        printf("%d ",vetorU[contador]);}
printf("\n");

return 0;
}

#endif // ex1

#ifdef ex2
/*Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de valor impar
    e o outro tera´ as componentes de valor par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.*/
int main(){
int vetor[10],contador,qtdU=0,qtdW=0,vetorU[10],vetorW[10];

printf("\nDigite 10 numeros inteiros para serem armazenados no vetor principal.\n");
for (contador=0;contador<10;contador++){
    printf("\n->%do numero: ",contador+1);
    scanf("%d",&vetor[contador]);
    if (vetor[contador]%2==0){
        vetorU[qtdU]=vetor[contador];
        qtdU++;}
    else{
        vetorW[qtdW]=vetor[contador];
        qtdW++;}
}
printf("\n\nVetor W= ");
    for(contador=0;contador<qtdW;contador++){
        printf("%d ",vetorW[contador]);}

printf("\n\nVetor U= ");
    for(contador=0;contador<qtdU;contador++){
        printf("%d ",vetorU[contador]);}
printf("\n");

return 0;
}

#endif // ex2

#ifdef ex3
/*3 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.*/

int main(){
int vetor1[2][3],vetor2[2][3],vetor3[2][3],contadorl,contadorc,soma;

printf("\nVamos construir dois vetores de numeros inteiros com 2 linhas e 3 colunas. Insira os valores que compõe os vetores:\n");
printf("\n-----------Entrada de dados vetor 1:-----------");

for (contadorl=0;contadorl<2;contadorl++){
    for(contadorc=0;contadorc<3;contadorc++){
        printf("\nLinha %d, coluna %d: ",contadorl+1,contadorc+1);
        scanf("%d",&vetor1[contadorl][contadorc]);}}


printf("\n\n-----------Entrada de dados vetor 2:-----------\n");

for (contadorl=0;contadorl<2;contadorl++){
    for(contadorc=0;contadorc<3;contadorc++){
        printf("\nLinha %d, coluna %d: ",contadorl+1,contadorc+1);
        scanf("%d",&vetor2[contadorl][contadorc]);}}



printf("\n\nVetor 1:\n");

for (contadorl=0;contadorl<2;contadorl++){
        printf("\n");
    for(contadorc=0;contadorc<3;contadorc++){
        printf("[%d] ",vetor1[contadorl][contadorc]);}}

printf("\n\nVetor 2:\n");

for (contadorl=0;contadorl<2;contadorl++){
        printf("\n");
    for(contadorc=0;contadorc<3;contadorc++){
        printf("[%d] ",vetor2[contadorl][contadorc]);}}

printf("\n\nVamos somar os valores dos indices do Vetor1 com Vetor2:\n");

for (contadorl=0;contadorl<2;contadorl++){
    for(contadorc=0;contadorc<3;contadorc++){
        soma=vetor1[contadorl][contadorc]+vetor2[contadorl][contadorc];
        printf("\nLinhas %d, colunas %d: ",contadorl+1,contadorc+1);
        printf("\n%d+%d=%d\n",vetor1[contadorl][contadorc],vetor2[contadorl][contadorc],soma);}}

return 0;
}


#endif // ex3

#ifdef ex4
/*4 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores
    ordenados.*/
int main(){
int vetor[10],aux,contador2,contador,posicao=0;

printf("Voce ira digitar 10 numeros inteiros para serem armazenados em um vetor.\nConforme for adicionando os numeros os mesmos serao dispostos em ordem crescente dentro do vetor.");
printf("\nVamos comecar:\n\n");
for(contador=0;contador<10;contador++){
    printf("\n%do numero: ",contador+1);
    scanf("%d",&vetor[contador]);
    if(contador==0){
        printf("Vetor=[%d]",vetor[contador]);}
    else{
        for(posicao=0;posicao<contador;posicao++){
            if(vetor[contador]<vetor[posicao]){
                aux=vetor[contador];
                vetor[contador]=vetor[posicao];
                vetor[posicao]=aux;}}
        printf("\nVetor=[");
        for(contador2=0;contador2<contador+1;contador2++){
        if(contador2<contador){
        printf("%d,",vetor[contador2]);}
        else{printf("%d",vetor[contador2]);}}
        printf("%]\n");}}

    return 0;}


#endif // ex4

#ifdef ex5
    /*Escreva um programa para receber via teclado em vetores 3 int, 3 long,
        3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:




*/

/*Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/
int main() {
    int ints[3],contador;
    long longs[3];
    unsigned unsigneds[3];
    float floats[3];
    double doubles[3];



    printf("Digite os valores inteiros:\n");
    for (contador=0;contador<3;contador++){
    printf("%do numero: ",contador+1);
    scanf("%d",&ints[contador]);}


    printf("Digite os valores longos:\n");
    for (contador=0;contador<3;contador++){
    printf("%do numero: ",contador+1);
    scanf("%ld",&longs[contador]);}

    printf("Digite os valores unsigned:\n");
    for (contador=0;contador<3;contador++){
    printf("%do numero: ",contador+1);
    scanf("%u",&unsigneds[contador]);}

    printf("Digite os valores float:\n");
    for (contador=0;contador<3;contador++){
    printf("%do numero: ",contador+1);
    scanf("%f",&floats[contador]);}


    printf("Digite os valores double:\n");
    for (contador=0;contador<3;contador++){
    printf("%do numero: ",contador+1);
    scanf("%lf",&doubles[contador]);}

    for(contador=0;contador<3;contador++){
    printf("%3d%20d%20u\n%13.2f%20.2lf\n", ints[contador], longs[contador], unsigneds[contador], floats[contador], doubles[contador]);
    }
    return 0;
}

#endif // ex5
