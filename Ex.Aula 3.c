#include<stdio.h>
#include<locale.h>


#define ex3

#ifdef ex1
/*1 - Escreva um programa que receba um numero N via teclado. Escreva uma funcao que retorne a soma dos algarismos do resultado de N!. O resultado deve ser
    mostrado na funcao main().Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e´ 2 + 4 = 6.*/

    int soma(int fatorial){
    int digito=0,soma=0;
    while(fatorial>0){
    digito=fatorial%10;
    soma+=digito;
    fatorial/=10;}
    return soma;
    }

    int main(){
    int N,contador;


    while(1){
        long long fatorial=1;
        do{
        printf("Vamos obter o fatorial do numero e a soma de seus algarismos. Digite um numero inteiro e positivo:\n->");
        scanf("%d",&N);
        if (N<0){
            printf("\n\aAtencao!!");}}
        while(N<0);

    for (contador=1;contador<=N;contador++){
        fatorial*=contador;}

    printf("\nO fatorial do numero %d e %d.\n",N,fatorial);

    int somafatorial=soma(fatorial);

    printf("\nA soma dos algarismos de %d e %d.\n",fatorial,somafatorial);

    while(1){
      int opcao;
        printf("\nO que deseja fazer agora?\n\n1-Sair\n2-Comecar de novo\n\n->");
        scanf("%d",&opcao);
        if (opcao==1){
          printf("\nAte a proxima.\n");
          exit(0);}
        else if(opcao==2){
          break;}
        else{
          printf("\nPor favor, digite 1 ou 2.\n");}
        }}

        return 0;}

#endif // ex1

#ifdef ex2
/*2 - Escreva um programa que receba dois numeros inteiros e execute as seguintes
    funçoes:
    - Verificar se o numero digitado e' positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.*/


/*-------------------------Verificação 1º número--------------------------*/
    int verificar1(numero1){

    int retorno1;
    if (numero1>0){
     retorno1=1;}

    else if(numero1<0){
     retorno1=0;}

    else{
    retorno1=-1;}

    return retorno1;}
/*-------------------------Verificação 2º número--------------------------*/
    int verificar2(numero2){
    int retorno2;
    if (numero2>0){
     retorno2=1;}
    else if(numero2<0){
     retorno2=0;}

    else{
    retorno2=-1;}
    return retorno2;}

/*--------------------AMBOS NÚMEROS POSITIVOS-------------------------*/
    int soma(numero1,numero2){
     int soma=0,contador,aux=0;
     if (numero1>numero2){
          aux=numero1;
          numero1=numero2;
          numero2=aux;}
     for(contador=numero1+1;contador<=numero2-1;contador++){
         soma+=contador;}
         printf("A soma dos numeros entre %d e %d e %d.",numero1,numero2,soma);
         return soma;}

/*-------------------AMBOS NÚMEROS NEGATIVOS-------------------*/
    int multiplicacao(numero1,numero2){
    int contador,aux=0,mult=1;
    if (numero1>numero2){
          aux=numero1;
          numero1=numero2;
          numero2=aux;
     }
     for (contador=numero1+1;contador<=numero2-1;contador++){
     mult*=contador;}
     printf("A multiplicacao dos numeros entre %d e %d e %d.",numero1,numero2,mult);
    }

/*-------------------------UM NÚMERO POSITIVO E UM NEGATIVO--------------------------*/
    int divisao(numero1,numero2){
    float div=0;
    div=(float)numero1/numero2;
    printf("A divisao de %d por %d e %.2f.",numero1,numero2,div);}

    int main(){
    setlocale(0,"Portuguese");
    int numero1,numero2,opcao;

    while(1){
    printf("Digite dois numeros inteiros.\n\nDigite o 1o numero:\n->");
    scanf("%d",&numero1);
    printf("Digite o 2o número:\n->");
    scanf("%d",&numero2);

    int retorno1=verificar1(numero1);
    int retorno2=verificar2(numero2);
    int retorno=retorno1+retorno2;

    if (retorno==2){
    int s=soma(numero1,numero2);}

    else if(retorno==0){
    int multi=multiplicacao(numero1,numero2);}

    else{
    int div=divisao(numero1,numero2);}
    while(1){
    printf("\n\nDeseja continuar?\n1-Sim\n2-Nao\n->");
    scanf("%d",&opcao);
    if (opcao==1){
    break;
    }
    else if (opcao==2){
    printf("\n\nAte mais.\n\n");
    break;}
    else{
    printf("\nDigite uma opção valida\n");}
    }
    if (opcao==2){
    break;}}
    return 0;
    }

#endif // ex2

#ifdef ex3
/*3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima os 4 resultados no video na funcao main().*/

/*-------------------------SOMA--------------------------*/

int soma(numero1,numero2){
int resultado;
resultado=numero1+numero2;
printf("\n---------------------------SOMA---------------------------\n");
printf("\n%25d + %d = %d\n\n",numero1,numero2,resultado);
return 0;
}
/*----------------------MULTIPLICAÇÃO-----------------------*/
int multiplicacao(numero1,numero2){
int resultado;
resultado=numero1*numero2;
printf("----------------------MULTIPLICACAO-----------------------\n");
printf("\n%25d * %d = %d\n\n",numero1,numero2,resultado);
return 0;
}
/*------------------------DIVISÃO---------------------------*/
int divisao(numero1,numero2){
float resultado;
resultado=(float)numero1/numero2;
printf("--------------------------DIVISAO-------------------------\n");
printf("\n%25d / %d = %.1f\n\n",numero1,numero2,resultado);
return 0;
}

/*-----------------------SUBTRAÇÃO--------------------------*/
int subtracao(numero1,numero2){
int resultado;
resultado=numero1-numero2;
printf("-------------------------SUBTRACAO------------------------\n");
printf("\n%25d - %d = %d\n\n",numero1,numero2,resultado);
return 0;
}


int main(){
setlocale(0,"Portuguese");
int numero1,numero2,opcao;
while(1){
printf("\nDigite dois numeros inteiros:");
printf("\n\nDigite o 1o numero: ");
scanf("%d",&numero1);
printf("\n\nDigite o 2o numero: ");
scanf("%d",&numero2);


int resultadosoma=soma(numero1,numero2);
int resultadomulti=multiplicacao(numero1,numero2);
int resultadodiv=divisao(numero1,numero2);
int resultadosub=subtracao(numero1,numero2);
printf("----------------------------FIM---------------------------\n");

while(1){
printf("\nDeseja continuar?\n1-Sim\n2-Nao\n-> ");
scanf("%d",&opcao);

if(opcao==1||opcao==2){
break;
}
else{
continue;
}
}
if (opcao==2){
    printf("\n\nAte mais!\n\n");
    break;
}
}
return 0;

}
#endif // ex3

#ifdef ex4

/*4 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/

int soma(int resultado_soma,int numero){
resultado_soma+=numero;
return resultado_soma;
}

int subtracao(int resultado_sub,int numero, int contador){
    if (contador==1){
    resultado_sub=numero;}
    else{
    resultado_sub-=numero;}
    return resultado_sub;}

int multiplicacao(int resultado_mult,int numero){
if (numero!=0){
resultado_mult*=numero;}
return resultado_mult;}

float divisao(float resultado_div,int numero){
if (numero!=0){
resultado_div/=numero;}
return resultado_div;}



int main(){
int opcao,contador=0,numero,resultado_soma=0,resultado_sub=0,resultado_mult=1;
float resultado_div=1;
                /*ENTRADA DE DADOS*/

printf("\nO programa tem por finalidade realizar as 4 operacoes matematicas com os numeros que voce inserir.\nPara finalizar as operacoes digite a letra 0.\n\n");
while(1){
    printf("%do numero:",contador+1);
    scanf("%d",&numero);
    if (numero==0){
    if (contador<=1){
    printf("\nVoce precisa digitar 2 ou mais numeros.\n");}
    else{
    printf("\nIniciando os calculos...");
    sleep(1);
    break;}}
    else{contador++;}


    resultado_soma=soma(resultado_soma,numero);
    resultado_sub=subtracao(resultado_sub,numero,contador);
    resultado_mult=multiplicacao(resultado_mult,numero);
    resultado_div=divisao(resultado_div,numero);}


printf("\nA soma dos numeros digitados e %d.\n",resultado_soma);
printf("\nA subtracao dos numeros digitados e %d.\n",resultado_sub);
printf("\nA multiplicacao dos numeros digitados e %d.\n",resultado_mult);
printf("\nA divisao dos numeros digitados e %.2f.\n",resultado_div);

return numero;}
#endif ex4

#ifdef ex5

/*5 - Escreva um programa que receba n valores inteiros via teclado na funcao main().
    Faca uma calculadora com as 4 operacoes aritmeticas.(utilize o comando switch).
    As operacoes aritmeticas devem ser funcoes. O resultado acumulado deve ser
    mostrado na funcao main().*/


 int soma(int resultado_soma,int numero){
    resultado_soma+=numero;
    return resultado_soma;
    }

    int subtracao(int resultado_sub,int numero, int contador){
    if (contador==1){
    resultado_sub=numero;}
    else{
    resultado_sub-=numero;}
    return resultado_sub;}

    int multiplicacao(int resultado_mult,int numero){
    if (numero!=0){
    resultado_mult*=numero;}
    return resultado_mult;}

    float divisao(float resultado_div,int numero){
    if (numero!=0){
    resultado_div/=(float)numero;}
    return resultado_div;}

    int main(){
    int contador=0,escolha,opcao,numero,resultado_soma=0,resultado_sub=0,resultado_mult=1;
    float resultado_div=1;

                /*ENTRADA DE DADOS*/
    printf("\nO programa tem por finalidade realizar as 4 operacoes matematicas com os numeros escolhidos.\nSe quiser encerrar a insercao de numero digite 0.\n");
    printf("\nEscolha 2 ou mais números para prosseguir:\n");
    while(1){
        printf("\n%do numero\n->",contador+1);
        scanf("%d",&numero);
        if (numero==0){if (contador>=2){break;}
            else{printf("\n\aOps, voce digitou apenas 1 numero.\n");}}
        else{contador++;}
        resultado_soma=soma(resultado_soma,numero);
        resultado_sub=subtracao(resultado_sub,numero,contador);
        resultado_mult=multiplicacao(resultado_mult,numero);
        resultado_div=divisao(resultado_div,numero);
    }
    while(1){
        printf("\n\nEscolha a operacao que deseja realizar:\n1-Soma\n2-Multiplicacaoo\n3-Divisao\n4-Subtracao\n->");
        scanf("%d",&escolha);

        switch(escolha){
            case 1:
            printf("\nA soma dos numeros digitados e %d.\n",resultado_soma);
            break;

            case 2:
            printf("\nA multiplicacao dos numeros digitados e %d.\n",resultado_mult);
            break;

            case 3:
            printf("\nA divisao dos numeros digitados e %.2f\n",resultado_div);
            break;

            case 4:
            printf("\nA subtracao dos numeros digitados e %d.\n",resultado_sub);
            break;

            default:
                printf("\n\nDigite uma opcao valida.\n\n");
                continue;}

            while(1){
            printf("\nDeseja realizar mais alguma operacao?\n1-Sim\n2-Nao\n->");
            scanf("%d",&opcao);
            if(opcao==1 || opcao==2){break;}
            else{printf("\n\aOpção invalida!");}}
            if (opcao==2){printf("\nSaindo...");
            sleep(1);
            printf("\n\nAte mais!\n\n");break;}
    }

    return numero;}

#endif // ex5
