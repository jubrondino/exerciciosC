#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

           /***********************************************
            *                                             *
            *        TRABALHO FINAL ALGORITMO             *
            *              Prof. Nádia                    *
            *             ADS 1º CICLO                    *
            *        Aluna: Juliana Brondino              *
            *                                             *
            ***********************************************/

#define ex17

    #ifdef ex1



    /*Receba doze números positivos e armazene no vetor A. Após a alimentação
    de todos os números mostre apenas os números maiores que 121 que estão armazenados no vetor.*/

    int numeros[12];

    void dados(){
    int contador;
    printf("Digite 12 números positivos e inteiros:\n");

    for (contador=1;contador<=12;contador++){
    printf("\nDigite o %dº número:",contador);
    scanf("%d",&numeros[contador]);

    while (numeros[contador]<0){
    printf("\n\aDigite um número maior que 0.\n\nDigite o %dº número:",contador);
    scanf("%d",&numeros[contador]);
}
    }
    }
void maior121(){
int contador,contadormaior,numerosmaior[12],maior;

for(contadormaior=1;contadormaior<12;contadormaior++){
    if(numeros[contadormaior]>121){
    numerosmaior[contadormaior]=numeros[contadormaior];
maior++;
}
}

if(maior>0){
    printf("\n\nOs números digitados dentro do vetor maiores que 121 são:\n");
for (contador=1;contador<=maior;contador++){
if(numerosmaior[contador]>121){
    printf("\n%d",numerosmaior[contador]);}}
}
else{ printf("\n\nNão há números maiores que 121.");}}

    void main(){
setlocale(0,"Portuguese");
printf("\n-------------Exercício 1 ------------\n\n");

    dados();
    maior121();
    }

#endif // ex1

#ifdef ex2
/*Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimensão com os
elementos do vetor A multiplicados por 3. Apresente o conteúdo dos dois vetores.*/
int vetorA[8],vetorB[8];

void dados(){
int  contador;
printf("Digite 8 números positivos e inteiros para armarzenarmos no Vetor A.\n");

for(contador=1;contador<=8;contador++){
    printf("Digite o %dº número:",contador);
    scanf("%d",&vetorA[contador]);
while(vetorA[contador]<0){
    printf("\n\aPor favor, digite números maiores que 0.\n\nDigite o %dº número:",contador);
    scanf("%d",&vetorA[contador]);
}
}

}

void vetora(){
int contador;
printf("\nOs números do vetor A são: ");
for(contador=1;contador<=8;contador++){
    if(contador<7){
    printf("%d,",vetorA[contador]);
}
else if(contador==7){
    printf("%d",vetorA[contador]);
}
else {
    printf(" e %d.",vetorA[contador]);
}
}
}

void vetorb(){
int contador;
printf("\n\nOs números do VetorB são: ");
for(contador=1;contador<=8;contador++){
vetorB[contador]=vetorA[contador]*3;
if(contador<7){
printf("%d,",vetorB[contador]);
}
else if(contador==7){
    printf("%d",vetorB[contador]);

}
else{
    printf(" e %d.\n\n\n",vetorB[contador]);
}
}
}


void main(){

setlocale(0,"Portuguese");
printf("\n-------------Exercício 2 ------------\n\n");

dados();
vetora();
vetorb();
}


#endif // ex2

#ifdef ex3
    /*Faça um programa que armazene num vetor 6 números negativos.
    Calcule a soma dos seus quadrados; se a soma for inferior a 1000 solicite novos dados.
     Mostre somente a soma que satisfaz a condição.*/
int vetor[6];
void dados()
{int contador;
    printf("Digite 6 números inteiros e negativos:\n");

    for(contador=1;contador<=6;contador++){
        printf("Digite o %dº número:",contador);
        scanf("%d",&vetor[contador]);

    while(vetor[contador]>=0){
    printf("\n\aEstamos trabalhando apenas com números negativos nesse programa.Por favor, digite números <0.\n\nDigite o %dºnumero:",contador);
    scanf("%d",&vetor[contador]);
    }
    }
}
int somaquadrados(){
int soma=0,contador;
for(contador=1;contador<=6;contador++){
    soma+=pow(vetor[contador],2);
}
return soma;
}

int verificar(int soma){
    if (soma < 1000) {
printf("\a\n\nComo a soma dos quadrados dos números digitados foi menor que 1000 vamos reiniciar a entrada de dados.\n\n");
dados();
int soma=somaquadrados();
verificar(soma);}
else{
    printf("\nA soma dos quadrados dos números digitados é:%d.\n\n\n\n\n",soma);
}
}

 void main (){
    setlocale(0,"Portuguese");
printf("\n-------------Exercício 3 ------------\n\n");

dados();
int soma=somaquadrados();
verificar(soma);
}


#endif // ex3

#ifdef ex4
/*Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor.*/

int vetor[10];
void dados()
{
int contador;
printf("Digite 10 números inteiros e positivos.\n");

for(contador=1;contador<=10;contador++){
    printf(".");
    printf("Digite o %dº número:",contador);
    scanf("%d",&vetor[contador]);
while(vetor[contador]<0)
{
printf("\n\n\aPor favor, digite números positivos e inteiros.\n\n Digite o %dº número:");
scanf("%d",&vetor[contador]);
}
}
}

void conteudo(){
int contador;
printf("Os 10 números digitados foram:");

for(contador=1;contador<=10;contador++){
if (contador<10){
    printf(" %d,",vetor[contador]);
}
else{
    printf(" %d.",vetor[contador]);
}
}
}
int big(){
int contador, maior=vetor[1];
printf("\nO maior número digitado foi ");
for(contador=1;contador<=10;contador++){
    if(maior<vetor[contador]){
    maior=vetor[contador];

}
else{
    maior=maior;
}
}
printf("%d",maior);
return maior;
-}

void quantidade(int maior){
int contador,qtd=0;
for(contador=1;contador<=10;contador++){
    if (vetor[contador]==maior){
    qtd++;
}

}
if(qtd=1){
printf(" e ele apareceu %d vez dentro do vetor",qtd);
}
else {printf("e ele apareceu %d vezes dentro do vetor!",qtd)}
}


void posicao(int maior){
int contador;
printf(" nas posições ");

for(contador=1;contador<=10;contador++){
if(vetor[contador]==maior){
    printf("%d/",contador);
}

}
printf(".");
}


void main()
{
setlocale(0,"Portuguese");
printf("\n-------------Exercício 4 ------------\n\n");
dados();
conteudo();
int maior= big();
quantidade(maior);
posicao(maior);

//como colocar as , e o . nas posições. Posso fazer um vetor pra posição?
}

#endif // ex4

#ifdef ex5
/*Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo e dimensão. Cada elemento do vetor B deve ser o valor negativo do elemento
correspondente do vetor A. Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor –8, e assim por diante. Apresentar o conteúdo dos dois vetores.*/
int vetorA[10];vetorB[10];

void dados(){
int contador;
printf("Digite 10 números inteiros e positivos.");

for(contador=1;contador<=10;contador++){
    printf("\n.Digite o %dº número: ",contador);
    scanf("%d",&vetorA[contador]);
while(vetorA[contador]<=0){
    printf("\a\nPor favor, digite um número inteiro e positivo.\n\n.Digite o %dº número:",contador);
scanf("%d",&vetorA[contador]);
}
}
}

void vetor1(){
int contador;
printf("\nOs números digitados no vetor A foram: ");
for(contador=1;contador<=10;contador++){
    if(contador<10){
    printf("%d,",vetorA[contador]);
}
else{
    printf("%d.",vetorA[contador]);
}
}
}

void vetor2(){
int contador;
printf("\n\nOs números do vetorB são:");
for(contador=1;contador<=10;contador++){
    vetorB[contador]=vetorA[contador]*(-1);
if(contador<10){
    printf("%d,",vetorB[contador]);
}
else{
    printf("%d.\n\n",vetorB[contador]);
}
}
}
void main(){
setlocale(0,"Portuguese");
printf("\n-------------Exercício 5 ------------\n\n");

dados();
vetor1();
vetor2();
}
#endif // ex5

#ifdef ex6// NIVEL DE DIFICULDADE ALTO!!!!

/*Leia o vetor A de uma dimensão máxima de 15 elementos. O usuário poderá digitar a quantidade desejada
desde que o valor seja inferior ou igual a 15.Construir um vetor B de mesmo tipo, de modo que cada elemento
 do vetor B seja fatorial do elemento correspondente do vetor A. Apresentar o conteúdo dos dois vetores.*/

int vetorA[15],vetorB[15];

int quantidade(){
int qtd;
do {printf("Preciso que você escolha (de 1 a 15) quantos números deseja incluir no vetor A:\n");
scanf("%d",&qtd);}

while(qtd<1||qtd>15);

return qtd;

}

void dadosA(int qtd){
int contador;
printf("Por favor, insira os números que deseja armazenar no VetorA.");
for(contador=1;contador<=qtd;contador++){
 do{printf("\n.Digite o %dº número:",contador);
 scanf("%d",&vetorA[contador]); }
while(vetorA[contador]<0);
}
}

void vetor1(int qtd){
int contador;
printf("Os números do vetor A são: ");

for(contador=1;contador<=qtd;contador++){
    if(contador<qtd-1){
    printf("%d,",vetorA[contador]);
}
else if(contador==qtd-1){
    printf("%d",vetorA[contador]);
}
else{
    printf(" e %d.",vetorA[contador]);
}

}
}

void vetor2(int qtd){
int contador,i;

printf("\nOs números dentro do vetorB são: ");
for(contador=1;contador<=qtd;contador++){
    int fatorial=1;
for (i=1;i<=vetorA[contador];i++){
    fatorial*=i;}
vetorB[contador]=fatorial;
if(contador<qtd-1){
printf("%d,",vetorB[contador]);
}
else if(contador==qtd-1){
    printf("%d",vetorB[contador]);
}
else{
    printf(" e %d.",vetorB[contador]);
}
}
}

void main(){
setlocale(0,"Portuguese");
printf("\n-------------Exercício 6 ------------\n\n");
int qtd=quantidade();
dadosA(qtd);
vetor1(qtd);
vetor2(qtd);
}
#endif // ex6

#ifdef ex7
/*O usuário poderá digitar a quantidade de números que ele deseja armazenar no vetor A desde que esse valor
seja superior a 4 e inferior ou igual a 20. Construa o vetor B da mesma dimensão e com os mesmos elementos
do vetor A. Observando que o primeiro elemento de A passa a ser o último de B, o segundo elemento de A
passa a ser o penúltimo de B e a assim por diante. Exibir o conteúdo dos dois vetores.*/

int vetorA[20],vetorB[20];

int quantidade(){
int qtd;
printf("Lembrando que precisa ser de 4 a 20 números.\nPreciso que digite quantos números terão dentro do vetorA:\n");
scanf("%d",&qtd);

while(qtd<4||qtd>20){
    printf("\a\n Por favor, digite um valor entre 4 e 20.\n\n.Digite quantos números terão dentro do vetor A:\n");
    scanf("%d",&qtd);
}
return qtd;
}

void dados(int qtd){
int contador;
printf("\nDigite os valores dentro do vetor");
for(contador=1;contador<=qtd;contador++){
    printf("\n.Digite o %dº valor:",contador);
    scanf("%d",&vetorA[contador]);
}

}

void vetor1(int qtd){
int contador;
printf("Os números do vetorA são: ");
for(contador=1;contador<=qtd;contador++){
    if(contador<qtd){
    printf("%d,",vetorA[contador]);
}
else if(contador==qtd-1){
    printf("%d",vetorA[contador]);
}

else {
    printf("e %d.",vetorA[contador]);
}
}
}
void vetor2(int qtd){
int contador;
printf("\nOs números do vetorB são: ");

for(contador=0;contador<qtd;contador++){
    vetorB[contador]=vetorA[qtd-contador];
if(contador<qtd-2){
printf("%d,",vetorB[contador]);
}
else if (contador<qtd-1){
    printf("%d",vetorB[contador]);

}

else{
     printf(" e %d.",vetorB[contador]);
}

}
}





void main(){
setlocale(0,"Portuguese");
printf("-------------Exercício 7 ------------\n\n");

int qtd=quantidade();
dados(qtd);
vetor1(qtd);
vetor2(qtd);

}
#endif // ex7 // PORQUE não posso incializar o contadorD com 1 e o A com 0?

#ifdef ex8
/*Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada. Construa o vetor D, sendo este a
junção dos três outros vetores. Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e
assim sucessivamente. Apresentar o conteúdo de todos os vetores. Exiba quantas vezes apareceram números
negativos no vetor D.*/

int vetorA[]={1,-2,6,10,12};
int vetorB[]={-10,50,-33,22,11};
int vetorC[]={1,2,-3,4,5};
int vetorD[15];

//fiquei na dúvida se era pro usuário escolher ou não os números dos vetores.
void printvetorA(){
int contador;
printf("\n\n\nOs números presentes no VetorA são:");
for(contador=0;contador<5;contador++){
    if(contador<3){
printf("%d,",vetorA[contador]); }

else if(contador==3) {
   printf("%d",vetorA[contador]);
}

else {
    printf(" e %d.",vetorA[contador]);}
}
}

void printvetorB(){
int contador;
printf("\n\nOs números presentes no VetorB são:");
for(contador=0;contador<5;contador++){
    if(contador<3){
printf("%d,",vetorB[contador]); }

else if(contador==3) {
   printf("%d",vetorB[contador]);
}

else {
    printf(" e %d.",vetorB[contador]);}
}
}
void printvetorC(){
int contador;
printf("\n\nOs números presentes no VetorC são:");
for(contador=0;contador<5;contador++){
    if(contador<3){
printf("%d,",vetorC[contador]); }

else if(contador==3) {
   printf("%d",vetorC[contador]);
}

else {
    printf(" e %d.",vetorC[contador]);}
}
}

void criacaovetorD(){
int contadorD,contadorA=0,contadorB=0,contadorC=0;/*eu sei que eu podia usar o mesmo contador
para A, B e C mas fica mais didático assim, e como estou aprendendo ainda, é útil.*/


    for(contadorD=0;contadorA<5&&contadorD<15;contadorD+=3){
    vetorD[contadorD]=vetorA[contadorA];
    contadorA++;}

    for(contadorD=1;contadorB<5&&contadorD<15;contadorD+=3){
    vetorD[contadorD]=vetorB[contadorB];
    contadorB++;}

    for(contadorD=2;contadorC<5&&contadorD<15;contadorD+=3){
    vetorD[contadorD]=vetorC[contadorC];
    contadorC++;
}
}



printvetorD(){
int contador;
printf("\n\nOs números presentes no VetorD são:");
for(contador=0;contador<15;contador++){
    if(contador<13){
printf("%d,",vetorD[contador]); }

else if(contador==13) {
   printf("%d",vetorD[contador]);
}

else {
    printf(" e %d.",vetorD[contador]);}
}

}
int qtdnegativos(){
int contadorD,neg=0;

for(contadorD=0;contadorD<15;contadorD++){
    if(vetorD[contadorD]<0){
    neg++;}
}
return neg;
}

void msgnegativos(int neg){
int contadorD;
if(neg>1){
printf("\n\nOs números negativos ocupam as posições: ");
printf("|");}
else if(neg==1){
    printf("\n\nO número negativo ocupa a posição: ");
    printf("|");}
else{printf("\nDentro do vetoD não há números negativos.");}
for (contadorD=0;contadorD<15;contadorD++){
    if(vetorD[contadorD]<0){
    printf("%d|",contadorD);}
}
}



void main(){
setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 8 ------------------------------------");
printvetorA();
printvetorB();
printvetorC();
criacaovetorD();
printvetorD();
int neg=qtdnegativos();
msgnegativos(neg);
printf("\n\n--------------------------------------------------------------------------------------\n");

}

#endif // ex8

#ifdef ex9
/*Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de mesmo tipo, e cada elemento
de B deve ser a metade de cada elemento de A. Exiba em que Vetor e em que posições apareceram valores
superiores a 4.*/

int vetorA[10];
float vetorB[10];

void dadosA(){
int contador;
printf("\n\n\nDigite 10 elementos que farão parte do vetor A:\n");

for(contador=0;contador<10;contador++){
    printf("Digite o %dº número:",contador+1);
scanf("%d",&vetorA[contador]);
}
printf("Os números que compõe o vetor A são: ");

for(contador=0;contador<10;contador++){
    if (contador<8){
    printf("%d,",vetorA[contador]);}
else if(contador==8){
    printf("%d",vetorA[contador]);}
else { printf(" e %d.",vetorA[contador]);}
}

}

vetorb(){
int contador;

for (contador=0;contador<10;contador++){
vetorB[contador]=(float)vetorA[contador]/4;
}
printf("\n\nOs números que compõe o vetorB são:");
for(contador=0;contador<10;contador++){
    if(vetorB[contador]==(int)vetorB[contador]){
    if(contador<9){printf("%.0f;",vetorB[contador]);}
    else{printf("%.0f.",vetorB[contador]);}
}
else{
    if(contador<9){printf("%.2f;",vetorB[contador]);}
else {printf("%.2f.",vetorB[contador]);}
}
}
}

void valormaior4(){
int contador,qtdmaior4=0;

for(contador=0;contador<=10;contador++){
if (vetorB[contador]>4){
         if(vetorB[contador]==(int)vetorB[contador]){
                         if(contador<9){
                         printf("%.0f;",vetorB[contador]);}
                         else {
                         printf("%.0f.",vetorB[contador]);}}
         else{
                    if(contador<9){
                        printf("%.2f;",vetorB[contador]);}

                    else{printf("%.2f.",vetorB[contador]);}}
qtdmaior4++;}
}
if(qtdmaior4==0){
    printf("\n\nNão há números maiores que 4.");
}
}

void main(){
setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 9 ------------------------------------");
dadosA();
vetorb();
valormaior4();


printf("\n\n--------------------------------------------------------------------------------------\n");

}
#endif // ex9

#ifdef ex10
/*Elabore um programa que efetue o cálculo de uma tabuada de um número qualquer e armazene os resultados
no vetor A de uma dimensão para 10 elementos. O usuário deverá digitar o número e o programa deverá
construir e exibir a tabuada correspondente.*/
int vetorA[10];

float dados(){
float numero;
printf("\n\nOlá! Estamos aqui para te ajudar com a matemática! Sei que pode parecer dificil,mas você pega o jeito.\n");
printf("\nDigite o número que você deseja saber a tabuada\n");

while(1){
printf("Digite aqui ---->");
scanf("%f",&numero);

if(numero==(int)numero){
    if(numero<0){
    printf("\nSeu número é negativo! Mas vamos calcular a tabuada mesmo assim. :)\n");}
else {printf("\n\nLegal! Você digitou o número %.0f! Boa escolha. Vamos calcular a tabuada para você!\n\n",numero);}
break;}


else{
printf("\nVocê digitou um número decimal, mas infelizmente só trabalhamos com números inteiros.\n\nVamos lá tente de novo!!\n");
printf("\nLembre-se o número precisa ser inteiro ou seja, sem quebradinhos como o número 1.75, por exemplo.\n");
}
}
return numero;
}

construcaovetorA(int numero){
int contador;
for(contador=1;contador<=10;contador++){
    vetorA[contador]=numero*contador;
}
}

tabuada(int numero){
int contador;
for(contador=1;contador<=10;contador++)
printf("%d x %d = %d\n",numero,contador,vetorA[contador]);
}




void main(){
setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 10 ------------------------------------");
int numero=dados();
construcaovetorA(numero);
tabuada(numero);


printf("\n\nE lembre-se qualquer número x 0 é igual a 0.");

printf("\n\n--------------------------------------------------------------------------------------\n");


}
#endif // ex10


#ifdef ex11
/*Crie a função MédiaFibonacci que receba da função main um valor do tipo inteiro e maior
 que zero que represente a quantidade de termos da seqüência e calcule a média dos termos
 da seqüência. Exiba na função main o resultado obtido na função MédiaFibonacci.

Seqüência de Fibonacci:

0 1 1 2 3 5 8 13 21....*/


void main(){

/*11.Crie a função Peso Ideal que por parâmetro da função main, a altura (alt) e o sexo
 de uma pessoa e retorna o seu peso ideal.O  recebimento da altura que deverá ser maior que
 zero e do sexo que só poderá ser m ou f será feito no interior da função main. Para homens,
calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres,
peso ideal = 62.1 x alt - 44.7. A quantidade de indivíduos será definida pelo usuário e
deverá ser maior que 3 e menor ou igual a 12.*/

float peso[12],altura[12];
char sexo[3];

int quantidade(){
int qtd;
printf("\nPrecisamos definir a quantidade de pessoas a serem analisadas por esse programa.\n");
printf("\nA quantidade precisa ser no mínimo 3 e no máximo 12 pessoas.\n\n Digite a quantidade de pessoas:");
while(1){
scanf("%d",&qtd);
if (qtd>=3 && qtd<=12){ break;}
else {printf("\n\aDigite uma quantidade entre 3 e 12:");}
}
return qtd;}

void dados(int qtd){
int contador;
printf("\nDigite os dados referentes as %d pessoas escolhidas:",qtd);


for (contador=0;contador<qtd;contador++){
   while(1){ printf("\n\nDigite a altura da %dº pessoa: ",contador+1);
    scanf("%f",&altura[contador]);
    printf("\n\nDigite o peso da %dº pessoa: ",contador+1);
    scanf("%f",&peso[contador]);
if(peso[contador]>0 &&altura[contador>0]){break;}
else {printf("\n\aErro na entrada de peso e/ou altura.Ambos precisam ser maiores que 0.");}
}
}
}
void calculo(int qtd){
int contador;
float pesoideal;

for(contador=0;contador<qtd;contador++){
    if(sexo[contador]=='F'){
pesoideal=(62.1*altura[contador])-44.7;
if(pesoideal>peso[contador]){
    printf("\nA %dº pessoa esta abaixo do peso.\n",contador+1);}
else if(pesoideal=altura){
    printf("\n A %d pessoa está no seu peso ideal.\n",contador+1);
}
else{printf("\nA %dº pessoa acima do peso.\n",contador+1);}
}
else {
    pesoideal=(72.7*altura[contador])-58;
if(pesoideal>peso[contador]){
    printf("\nA %dº pessoa esta abaixo do peso.\n",contador+1);}
else if(pesoideal=altura){
    printf("\n A %d pessoa está no seu peso ideal.\n",contador+1);
}
else{printf("\nA %dº pessoa acima do peso.\n",contador+1);}
}
}
}

setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 11 ------------------------------------");
int qtd=quantidade(),contador;
dados(qtd);

printf("\nDigite F caso a pessoa seja do sexo feminino e M se for do sexo masculino:");

for(contador=0;contador<qtd;contador++){
while(1){
printf("\n");
printf("Digite o sexo da %dº pessoa: ",contador+1);
scanf(" %c",&sexo[contador]);
if(sexo[contador]=='F'||sexo[contador]=='M'){break;}
else { printf("\n\aDigite apenas F ou M para designar o sexo de cada individuo.\n");}

}}
calculo(qtd);

printf("\n\n--------------------------------------------------------------------------------------\n");
}
#endif // ex11

#ifdef ex12
/*13.	Crie a função NumeroPositivo que garanta  o recebimento no seu interior de um número
 maior que zero.Calcule e escreva dentro da função main a tabuada de 1 até N.
Mostre a tabuada na forma:
1 x N = N
2 x N = 2N */

int NumeroPositivo(){
int quantidade;
do{printf("\n\nDigite um número qualquer maior que 0:\n");
scanf("%d",&quantidade);}
while(quantidade<0);
return quantidade;
}

void tabuada(int quantidade){
int contador,mult,produto;
printf("\nA tabuada do 1 até %d é:\n",quantidade);

for(contador=1;contador<=quantidade;contador++){
    printf("\n----------------------------------------\n");
    printf("\nTabuada do %d:\n",contador);
for(mult=1;mult<=10;mult++){
    produto=mult*contador;
    printf("%d x %d=%d\n",mult,contador,produto);
}


}
}



void main(){
setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 12 ------------------------------------");
int qtd=NumeroPositivo();
tabuada(qtd);


printf("\n\n--------------------------------------------------------------------------------------\n");
}

#endif // ex12

#ifdef ex13

/*12.	Crie a função Media que receba três notas  e  uma letra de um aluno . Se a letra for A o
 procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada
(pesos: 5, 3 e 2) e se for H, a sua média harmônica. Exiba na função main a média calculada na
função Media. */

float notas[3];


void dadosnotas(){
int contador;
printf("\nDigite as 3 notas do aluno:");
for(contador=1;contador<=3;contador++){
   while(1){ printf("\n%dº nota: ",contador);
scanf("%f",&notas[contador]);
if (notas[contador]>0){break;}
else {printf("\n\aErro na digitação da nota.");}
}
}
}

void medianotas(){
float media;
char letra;
printf("\nVamos calcular a média. \nPara média aritmética digite A.\nPara média ponderada digite P.\nPara média harmônia digite H.\n");
while(1){printf("Pode digitar: ");
scanf(" %c",&letra);
if(letra=='A'||letra=='a'||letra=='P'||letra=='p'||letra=='H'||letra=='h'){break;}
else{printf("\n\aVocê precisa digitar as letras correspondentes mencionadas acima.");}
}

if(letra=='A'||letra=='a'){
    media=(notas[1]+notas[2]+notas[3])/3;
printf("A média aritmética das notas é: %.2f",media);
}

else if(letra=='P'||letra=='p'){
    media=(notas[1]*5+notas[2]*3+notas[3]*2)/10;
printf("A média ponderada das notas é %.2f",media);
}

else{
    media=3/((1.0/notas[1])+(1.0/notas[2])+(1.0/notas[3]));
printf("A média harmônica das notas é %.2f",media);
}
}

void main(){
setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 13 ------------------------------------");
dadosnotas();
medianotas();


printf("\n\n--------------------------------------------------------------------------------------\n");
}

#endif // ex13


#ifdef ex14
void main(){

/*Crie a função MédiaFibonacci que receba da função main um valor do tipo inteiro e maior que
zero que  represente a quantidade de termos da seqüência e calcule a média dos termos da
seqüência. Exiba na função main o resultado obtido na função MédiaFibonacci.
         Seqüência de Fibonacci:
	0  1  1  2   3   5   8  13  21....*/

setlocale(0,"Portuguese");
printf("\n\n\n\n\n---------------------------------------Exercício 14 ------------------------------------");



printf("\n\n--------------------------------------------------------------------------------------\n");
}

#endif // ex14

#ifdef ex15

/*Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o
cálculo do reajuste de salário cada funcionário. Considere que o funcionário deve receber um
reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 800
e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve
ser de 5%. Exiba na função main o salário antigo e novo salário obtido na função de K números
definido pelo usuário. Essa quantidade K deverá ser maior que zero e menor ou igual a 10.*/

float salario[10];

int quantidade(){
int qtd;
printf("\n\n\nDigite a quantidade de colaborares a qual deseja calcular o reajuste. PS: min. 1 e max.10:");
while(1){
scanf("%d",&qtd);
if(qtd>0 && qtd<10){break;}
else{printf("\n\aQuantidade inválida.Digite uma quantidade entre 1 e 10:");}}
return qtd;
}

void dados(int qtd){
int contador;
printf("\nDigite o salário dos %d colaboradores.",qtd);
printf("\nFormatos aceitos ex: 800 ou 800,00\n");

for(contador=1;contador<=qtd;contador++){
     printf("\nSalário do %dº colaborador: ",contador);
    while(1){  scanf("%f",&salario[contador]);
if(salario>0){break;}
else{printf("\a\n\nPor favor, digite um valor válido maior que 0.");}}}
}

void ReajSalNovo(int qtd){
int contador;
float salarioreaj;

for (contador=1;contador<=qtd;contador++){

if(salario[contador]<800){
    salarioreaj=salario[contador]+(salario[contador]*0.15);
printf("\nO salário reajustado do %dº funcionário é: %.2f reais.",contador,salarioreaj);}

else if(salario[contador]>=800 &&salario[contador]<=1000){
    salarioreaj=salario[contador]+(salario[contador]*0.1);
printf("\nO salário reajustado do %d funcionário é: %.2f reais.",contador,salarioreaj);}

else {
    salarioreaj=salario[contador]+(salario[contador]*0.1);
printf("\nO salário reajustado do %d funcionário é: %.2f reais.",contador,salarioreaj);}
}
}



void main(){
setlocale(LC_ALL,"");
printf("\n\n\n\n\n---------------------------------------Exercício 15 ------------------------------------");
int qtd=quantidade();
dados(qtd);
ReajSalNovo(qtd);
printf("\n\n--------------------------------------------------------------------------------------\n");
}

#endif // ex15

#ifdef ex16
/*1.	Leia 8 elementos (valores inteiros) para os vetores A e B de uma dimensão do tipo vetor.
 Construir vetores C e D de mesmo tipo e dimensão. O vetor C deve ser formado pelos elementos de
 índice ímpar dos vetores A e B, e O vetor Ddeve ser formado pelos elementos de índice par dos
vetores A e B.
 Apresente os conteúdos de todos os vetores. */

int vetorA[8],vetorB[8],vetorC[8],vetorD[8];

void dadosA(){
int  contador;
printf("\n\nDigite 8 números inteiros para compor o vetorA:\n");
for(contador=1;contador<=8;contador++){
   printf("\nDigite o %dº número:",contador);
scanf("%d",&vetorA[contador]); }
}

void dadosB(){
int contador;
printf("\n\nDigite 8 números inteiros para compor o vetorB:\n");
for(contador=1;contador<=8;contador++){
   printf("\nDigite o %dº número:",contador);
scanf("%d",&vetorB[contador]);
}
}

void dadosC() {
    int contadorC=1, contadorA, contadorB;

    for (contadorA = 2; contadorA <= 8; contadorA += 2) {
        vetorC[contadorC] = vetorA[contadorA];
        contadorC++;
    }
  for (contadorB = 2; contadorB <= 8; contadorB += 2) {
        vetorC[contadorC] = vetorB[contadorB];
        contadorC++;
    }
}

void dadosD() {
    int contadorD=1, contadorA, contadorB;

    for (contadorA = 1; contadorA <= 8; contadorA += 2) {
        vetorD[contadorD] = vetorA[contadorA];
        contadorD++;
    }
  for (contadorB = 1; contadorB <= 8; contadorB += 2) {
        vetorD[contadorD] = vetorB[contadorB];
        contadorD++;
    }
}

void conteudo(){
int contador;
printf("\n\nOs números do vetorA são: ");

for(contador=1;contador<=8;contador++){
       if(contador<7){
    printf("%d,",vetorA[contador]);
}
else if(contador==7){
    printf("%d",vetorA[contador]);
}
else {printf(" e %d.",vetorA[contador]);}

}

printf("\n\nOs números do vetorB são: ");
for(contador=1;contador<=8;contador++){
       if(contador<7){
    printf("%d,",vetorB[contador]);
}
else if(contador==7){
    printf("%d",vetorB[contador]);
}
else {printf(" e %d.",vetorB[contador]);}

}

printf("\n\nOs números do vetorC são: ");

for(contador=1;contador<=8;contador++){
    if(contador<7){
    printf("%d,",vetorC[contador]);
}
else if(contador==7){
    printf("%d",vetorC[contador]);
}
else {printf(" e %d.",vetorC[contador]);}

}


printf("\n\nOs números do vetorD são: ");

for(contador=1;contador<=8;contador++){
    if(contador<7){
    printf("%d,",vetorD[contador]);
}
else if(contador==7){
    printf("%d",vetorD[contador]);
}
else {printf(" e %d.",vetorD[contador]);}

}

}


void main(){
setlocale(LC_ALL,"");
printf("\n\n\n\n\n---------------------------------------Exercício 16 ------------------------------------");
dadosA();
dadosB();
dadosC();
dadosD();
conteudo();

printf("\n\n--------------------------------------------------------------------------------------\n");

}

#endif // ex16

#ifdef ex17
/*12.	Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:
a)	A média da classe;
b)	A quantidade de alunos aprovados, isto é, com nota >=7;
c)	A quantidade de alunos reprovados, isto é, com nota <7.
*/
float notas[10];

void dadosnotas(){
int contador;
printf("\nDigite a nota dos 10 alunos da turma:\n");
for(contador=1;contador<=10;contador++){
   while(1){ printf("\n\nNota do %dº aluno: ",contador);
scanf("%f",&notas[contador]);
if(notas[contador]>=0 && notas[contador]<=10){break;}
else {printf("\a\nDigite uma nota válida de 0 a 10.\n");}
}}
}

void media(){
int contador;
float soma,medianotas;
for(contador=1;contador<=10;contador++){
    soma+=notas[contador];
}
medianotas=soma/10;
printf("\n\nA média da sala é : %.2f. ",medianotas);
}

void situacao(){
int contador,reprovado=0,aprovado=0;

for(contador=1;contador<=10;contador++){
   if( notas[contador]>=7){
    aprovado++;
}
else{ reprovado++;}
}
if(aprovado>1)
printf("\nHá %d alunos aprovados",aprovado);

else if(aprovado==1){
printf("\nHá %d aluno aprovado",aprovado);
}
else{
printf("\nNão há nenhum aluno aprovado");}

if(reprovado>1)
printf(" e %d alunos reprovados.",reprovado);

else if(reprovado==1){
printf(" e %d aluno reprovado.",reprovado);
}
else{
printf(" e não há nenhum aluno reprovado.");}


}

void main(){
int contador;
setlocale(LC_ALL,"");
printf("\n\n\n\n\n---------------------------------------Exercício 17 ------------------------------------");
dadosnotas();
media();
situacao();
printf("\n\n--------------------------------------------------------------------------------------\n");

}
#endif // ex17
