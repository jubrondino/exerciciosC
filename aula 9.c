#import <stdio.h>
#import <stdlib.h>

#define ex2

#ifdef ex1
/*
1 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na função main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().*/

    void dados(char*p1,char*p2){
    printf("\nDigite uma palavra: ");
    fgets(p1,10,stdin);
    printf("\nDigite outra palavra: ");
    fgets(p2,10,stdin);
    return 0;}

    int compara(char *p1,char *p2){
    for(int contador=0;p1[contador]!='\0'||p2[contador]!='\0';contador++){
        if (p1[contador]!=p2[contador]){return 0;}}
    return 1;
    }

    int main(){
    char palavra1[10],palavra2[10];
    while(1){
    dados(palavra1,palavra2);
    int opcao;
    int resultado=compara(palavra1,palavra2);
    if (resultado==1){printf("\n\nAs palavras digitadas sao iguais.\n");}
    else{printf("\n\nAs palavras digitadas sao diferentes.\n");}
    while(1){
        printf("\nDeseja tentar novamente?\n1-Sim\n2-Nao\n->");
        scanf("%d",&opcao);
        if(opcao==1){getchar();break;}
        else if(opcao==2){printf("\nAte mais");exit(0);}
        else{printf("\n\n\aOpcao invalida. Tente novamente");}
    }}
    return 0;}


#endif // ex1

#ifdef ex2
/*2 - Escreva um programa que receba n valores via teclado e receba tambem a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funcoes que recebe os valores usando ponteiros.
    As variaveis sao LOCAIS na funcao main().*/
int op_aritmeticas(){
int operacao;
printf("\nQual operacao deseja realizar?\n1-Soma\n2-Multiplicacao\n3-Divisao\n4-Subtracao\n->");
scanf("%d",&operacao);
return operacao;}

int numeros(int *number){
int qtd=0,contador;
char *numero[100][20];
printf("\nDigite quantos numeros quiser. Quando acabar de inseri-los digite '=' para obter o resultado:\n");
for(contador=0;contador<100;contador++){
scanf("%s",&numero[contador]);
if (numero[contador]== '='){break;}
else{qtd++;}}
getchar();
for(contador=0;contador<qtd;contador++){
    number[contador]= atoi(numero[contador]);}
return qtd;}

int soma(int *number, int qtd){
int adicao=0;
    for(int contador=0;contador<qtd;contador++){
        adicao+=number[contador];}
return adicao;}

int subtracao(int *number,int qtd){
int sub=number[0];
for (int contador=1;contador<qtd;contador++){
    sub-=number[contador];}
    return sub;}

int multiplicacao(int *number,int qtd){
int mult=1;
for (int contador=0;contador<qtd;contador++){
mult*=number[contador];}
return mult;}

float divisao(int *number,int qtd){
float div=(float)number[0];
for (int contador=1;contador<qtd;contador++){
if (number[contador]!=0){
div/=(float)number[contador];}
else{printf("\nDivisao por zero. Resultado indefinido.\n");return -1;}
}

return div;}

void finalizar(){
int opcao;
  while(1){
        printf("\nDeseja tentar novamente?\n1-Sim\n2-Nao\n->");
        scanf("%d",&opcao);
        if(opcao==1){getchar();break;}
        else if(opcao==2){printf("\nAte mais");exit(0);}
        else{printf("\n\n\aOpcao invalida. Tente novamente");}}}


int main(){
int numero[100],qtd=numeros(numero),resultado=0,opcao;

while(1){
while(1){
int operacao=op_aritmeticas();

if(operacao==1){resultado=soma(numero,qtd);printf("\n\nResultado = %d\n",resultado);break;}
else if (operacao==2){resultado=multiplicacao(numero,qtd);printf("\n\nResultado = %d\n",resultado);break;}
else if(operacao==3) {
if (qtd > 1) {resultado = divisao(numero, qtd);printf("\n\nResultado = %.2f\n", resultado);}
else {printf("\nNao e possivel realizar divisao com menos de dois numeros.");}break;}
else if(operacao==4){resultado=subtracao(numero,qtd);printf("\n\nResultado = %d\n",resultado);break;}
else {printf("\nOpcao invalida. Tente novamente.");break;}}


finalizar();}


    return 0;}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
    usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/
int main(){

    return 0;}
#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main(). Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(também numa função).

    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/
int main(){

    return 0;}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
     estutura: nome, end, cidade, estado, cep*/
int main(){

    return 0;}
#endif // ex5

#ifdef ex6
/*6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro sempre usando ponteiros.*/
int main(){

    return 0;}
#endif // ex6
