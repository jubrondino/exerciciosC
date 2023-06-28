#include<stdio.h>
#include<locale.h>
#include<math.h>


#define ex11

#ifdef ex1

/*. Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa.*/
int numero[3];

void dados(){
int contador;
printf("Digite 3 números:\n");
for (contador=1;contador<=3;contador++){
printf("Digite o %dº número\n",contador);
scanf("%d",&numero[contador]);
}
}
void dobro(){
int numdobro=0,contador;
for (contador=1;contador<=3;contador++){
    numdobro=numero[contador]*2;
printf("O dobro de %d é %d\n",numero[contador],numdobro);
}
}
int main(){
setlocale(0,"Portuguese");
dados();
dobro();
}

#endif ex1

#ifdef ex2

 /*Faça um programa que receba as notas de três provas e calcule a média. Para o
cálculo, escreva uma função. O programa deve imprimir a média ao final.*/
float notas[3];

float nota() {
int contador;
float notap1,soma=0;

printf("Digite abaixo a nota das três provas:\n");

for (contador=1;contador<=3;contador++){

printf("Digite a nota da %dº prova.\n",contador);
scanf("%f",&notas[contador]);
soma+=notas[contador];
}
return soma;
}

void media(float soma){
float notamedia;
notamedia=soma/3;
printf("A média da nota das três provas é %.2f",notamedia);

}

int main (){
setlocale(0,"Portuguese");
float soma=nota();
media(soma);
return 0;
}
#endif // ex2}
#ifdef ex3

/*Faça um programa em C que leia o valor de um ângulo em graus e o converta,
utilizando uma função, para radianos e ao final imprima o resultado. Veja a
fórmula de cálculo a seguir.
r ad =
ang × pi
---------
180
(7.1)
Em que:
• rad = ângulo em radianos
• ang = ângulo em graus
• pi = número do p*/

int angulo(){
int valor=0;
printf("Digite o valor do ângulo que deseja converter para radianos:\n");
scanf("%d",&valor);

return valor;
}

void radianos(int valor){
float pi=3.14,rad=0;
rad=(valor*pi)/180;
printf("O valor de %dº em radianos é %.2f",valor,rad);

}

int main(){
setlocale(0,"Portuguese");
int valor=angulo();
radianos(valor);
return 0;
}
#endif // ex3

#ifdef ex4
/*Faça um programa que calcule e imprima o fatorial de um número, usando uma
função que receba um valor e retorne o fatorial desse valor.*/

int numero() {
int num;
printf("Digite o número que deseja saber o fatorial:\n");
scanf("%d",&num);
return num;
}
void fatorial(num){
int fator=1,contador;
for (contador=2;contador<=num;contador++){
fator*=contador-1;
}
printf("O valor do fatorial de %d é %d", num,fator);
}

int main(){
setlocale(0,"Portuguese");
int num=numero();
fatorial(num);

return 0;}

 #endif // ex4

#ifdef ex5
/*Faça um programa que verifique se um número é primo por meio de um função.
Ao final imprima o resultado.*/

int numero() {
int num;
printf("Digite um número para se ele é ou não primo:\n");
scanf("%d",&num);
return num;
}

int calculo(int num){
int contador,soma=0;
for (contador=1;contador<=num;contador++)
{
if (num%contador==0){
    soma+=contador;
}
}

if(soma==num+1){
    printf("%d é um número primo",num);
}
else {
    printf("%d não é um número primo",num);
}
}

int main(){
setlocale(0,"Portuguese");
int num=numero();
calculo(num);
}

#endif // ex5

#ifdef ex6

void saldo(){
float valor=0,valornovo=0;
int reajuste=0;

printf("Qual o saldo da sua aplicação?\n");
scanf("%f",&valor);
printf("Qual a porcentagem de reajuste?\n");
scanf("%d",&reajuste);
valornovo=valor+(reajuste*0.01*valor);
printf("O novo valor com reajuste é de %.2f",valornovo);

}
void main()
{
setlocale(0,"Portuguese");
saldo();
}

#endif // ex6

#ifdef ex7
/*Faça um programa que leia a base e a altura de um retângulo e imprima o perimetro, a área e a diagonal. Para fazer os cálculos, implemente três funções, cada
uma deve realizar um cálculo especifico conforme solicitado. Utilize as fórmulas
a seguir.*/

void dados(int *base,int *altura){


printf("Digite o valor da base do triângulo:");
scanf("%d",&*base);
printf("\nDigite o valor da altura do triângulo:");
scanf("%d",&*altura);

}

void perimetro(int base,int altura){
int peri;
peri=2*(base+altura);
printf("O perímetro do triângulo é %d.\n",peri);

}

void area(int base,int altura){
int areat;
areat=base*altura;
printf("A área do triângulo é %d.\n",areat);
}

void diagonal(int base,int altura){
float diag;
diag=sqrt(pow(base,2)+pow(altura,2));
printf("A diagonal do triângulo é %.2f\n",diag);
}

main(){
setlocale(0,"Portuguese");
int base,altura;
dados(&base,&altura);
perimetro(base,altura);
area(base,altura);
diagonal(base,altura);

return 0;


}

#endif // ex7

#ifdef ex8
/*Faça um programa que leia o raio de um circulo e imprima o perímetro e a área.
Para fazer os cálculos, implemente duas funções, cada uma deve realizar um
cálculo especifico conforme solicitado. Utilize as fórmulas a seguir*/

int dados(){
int raio;
printf("Digite o valor do raio do circulo:",raio);
scanf("%d",&raio);
return raio;
}

void perimetro(int raio){
float peri;
peri=2*3.14*raio;
printf("\nO perimetro do circulo é:%.2f.",peri);
}

void area(int raio){
float areat;
areat=3.14*pow(raio,2);
printf("\nO valor da área do círculo é %.2f",areat);
}

void main(){
setlocale(0,"Portuguese");
int raio=dados();
perimetro(raio);
area(raio);

}
#endif // ex8

#ifdef ex9

int dados(){
int num;

printf("Digite um número inteiro:\n");
scanf("%d",&num);

return num;
}

void pares(int num){

int nump,contador;
printf("Os números pares são:\n");
for(contador=1;contador<=num;contador++){
if(contador%2==0){
    nump=contador;
printf("%d ",nump);}
}
}

void impar(int num){

int impares,contador;

printf("\nOs números ímpares são:\n");

for(contador=1;contador<=num;contador++){
if(contador%2!=0){
impares=contador;
printf("%d ",impares);}
}
}

void main(){
setlocale(0,"Portuguese");
int numero=dados();
pares(numero);
impar(numero);

}

#endif // ex9

#ifdef ex10
int numeros[10];

void dados(){
int contador;

printf("Digite 10 números inteiros:\n");

for(contador=1;contador<=10;contador++){
printf("\nDigite o %dº número:",contador);
scanf("%d",&numeros[contador]);
}

}

int maior() {
int contador,maior=numeros[1];

printf("\nO maior número digitado é:");
for(contador=2;contador<=10;contador++){
    if (numeros[contador]>maior){
    maior=numeros[contador];
}
}
printf("%d.",maior);
}


void main(){
setlocale(0,"Portuguese");
dados();
maior();
}


#endif // ex10


#ifdef ex11

//2. Faça um programa que imprima todos os números pares de 100 até 1.


int main(){

printf("Esse programa irá imprimir os números pares partindo do 100 até o número 1.\n");

int contador,pares;
for(contador=100;contador>=1;contador--)
{
if (contador%2==0){
    printf("%d\n",contador);
}
}
return 0;
}
#endif // ex11
