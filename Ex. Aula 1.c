#include <stdio.h>
#include<locale.h>

#define ex2

#ifdef ex1
int main(){
//Escreva um programa que receba via teclado um tempo em segundos e converta para horas, minutos e segundos.Ex.: recebe 3850 segundos que converte para 1h 4min 10s.
int segundos,segundos_restantes,horas,minutos;
setlocale(0,"Portuguese");
printf("Digite quantos segundos você quer converter:\n");
scanf("%d",&segundos);
horas=segundos/3600;
segundos_restantes=segundos%3600;
minutos=segundos_restantes/60;
segundos_restantes=segundos_restantes%60;

printf("%dh %dm %ds",horas,minutos,segundos_restantes);
}


#endif // ex1

#ifdef ex2

int main(){
/*Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char */
setlocale(LC_ALL,"");

float var_float=0;
short int var_short=0;
long int var_long=0;
int var_int=0;
double var_double=0;
char var_char;


printf("\nDigite uma variável do tipo short: ");
scanf("%hd",&var_short);

printf("\nDigite uma variável do tipo long: ");
scanf("%ld",&var_long);

printf("\nDigite uma variável do tipo int: ");
scanf("%d",&var_int);

printf("\nDigite uma variável float: ");
scanf("%f",&var_float);

printf("\nDigite uma variável do tipo double: ");
scanf("%lf",&var_double);

printf("\n Digite uma variável char:");
scanf(" %c",&var_char);


printf("\n\n%5.hd%25.ld%45.d\n", var_short, var_long, var_int);
printf("%15.1f%35.lf%55.c\n\n", var_float, var_double, var_char);


return 0;
}


#endif // ex2

#ifdef ex3
/*Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/

int main(){
setlocale(0,"Portuguese");
int a,b;
printf("Entre com 1º número:\n");
scanf("%d",&a);
printf("Entre com o 2º número:\n");
scanf("%d",&b);

printf("O 1º número é %d e o segundo %d\n",a,b);
a=a+b; // a=5+3
b=a-b; // b=8-3
a=a-b;  // a=8-5

printf("O 2º número é o %d e o segundo %d",a,b);
}
#endif // ex3

#ifdef ex4

/*4 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
            NúmeroGerado = 321
#endif // ex4*/

int main(){
int numero=0,invertido=0;
while (1){
printf("\nDigite um número inteiro, positivo de 3 dígitos:");
scanf("%d",&numero);
if (numero<100||numero>999){
    printf("\nPreste atenção ao que foi pedido!");
}
else {
    break;
}}

 int digito;
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Número gerado com dígitos invertidos: %d\n", invertido);

return 0;
}
#endif //ex4

#ifdef ex5
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
int main(){
int numero=0,limite=0,contador=0;

printf("Vamos determinar qual o menor múltiplo de um número inteiro a partir de um determinado número.\nDigite o número que deseja saber o múltiplo:  ");
scanf("%d",&numero);
printf("Digite o número limite (a partir do qual você deseja saber o menor múltiplo: ");
scanf("%d",&limite);

for (contador=limite+1;;contador++){
    if (contador%numero==0){
    printf("O maior multiplo de %d maior que %d é %d",numero,limite,contador);
    break;
}
}
return 0;
}
#endif // ex5
