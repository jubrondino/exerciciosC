#include<stdio.h>
#include<locale.h>
#include<math.h>


#define ex11

#ifdef ex1

/*. Fa�a um programa em C que leia tr�s n�meros e, para cada um, imprimir o dobro.
O c�lculo dever� ser realizado por uma fun��o e o resultado impresso ao final do
programa.*/
int numero[3];

void dados(){
int contador;
printf("Digite 3 n�meros:\n");
for (contador=1;contador<=3;contador++){
printf("Digite o %d� n�mero\n",contador);
scanf("%d",&numero[contador]);
}
}
void dobro(){
int numdobro=0,contador;
for (contador=1;contador<=3;contador++){
    numdobro=numero[contador]*2;
printf("O dobro de %d � %d\n",numero[contador],numdobro);
}
}
int main(){
setlocale(0,"Portuguese");
dados();
dobro();
}

#endif ex1

#ifdef ex2

 /*Fa�a um programa que receba as notas de tr�s provas e calcule a m�dia. Para o
c�lculo, escreva uma fun��o. O programa deve imprimir a m�dia ao final.*/
float notas[3];

float nota() {
int contador;
float notap1,soma=0;

printf("Digite abaixo a nota das tr�s provas:\n");

for (contador=1;contador<=3;contador++){

printf("Digite a nota da %d� prova.\n",contador);
scanf("%f",&notas[contador]);
soma+=notas[contador];
}
return soma;
}

void media(float soma){
float notamedia;
notamedia=soma/3;
printf("A m�dia da nota das tr�s provas � %.2f",notamedia);

}

int main (){
setlocale(0,"Portuguese");
float soma=nota();
media(soma);
return 0;
}
#endif // ex2}
#ifdef ex3

/*Fa�a um programa em C que leia o valor de um �ngulo em graus e o converta,
utilizando uma fun��o, para radianos e ao final imprima o resultado. Veja a
f�rmula de c�lculo a seguir.
r ad =
ang � pi
---------
180
(7.1)
Em que:
� rad = �ngulo em radianos
� ang = �ngulo em graus
� pi = n�mero do p*/

int angulo(){
int valor=0;
printf("Digite o valor do �ngulo que deseja converter para radianos:\n");
scanf("%d",&valor);

return valor;
}

void radianos(int valor){
float pi=3.14,rad=0;
rad=(valor*pi)/180;
printf("O valor de %d� em radianos � %.2f",valor,rad);

}

int main(){
setlocale(0,"Portuguese");
int valor=angulo();
radianos(valor);
return 0;
}
#endif // ex3

#ifdef ex4
/*Fa�a um programa que calcule e imprima o fatorial de um n�mero, usando uma
fun��o que receba um valor e retorne o fatorial desse valor.*/

int numero() {
int num;
printf("Digite o n�mero que deseja saber o fatorial:\n");
scanf("%d",&num);
return num;
}
void fatorial(num){
int fator=1,contador;
for (contador=2;contador<=num;contador++){
fator*=contador-1;
}
printf("O valor do fatorial de %d � %d", num,fator);
}

int main(){
setlocale(0,"Portuguese");
int num=numero();
fatorial(num);

return 0;}

 #endif // ex4

#ifdef ex5
/*Fa�a um programa que verifique se um n�mero � primo por meio de um fun��o.
Ao final imprima o resultado.*/

int numero() {
int num;
printf("Digite um n�mero para se ele � ou n�o primo:\n");
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
    printf("%d � um n�mero primo",num);
}
else {
    printf("%d n�o � um n�mero primo",num);
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

printf("Qual o saldo da sua aplica��o?\n");
scanf("%f",&valor);
printf("Qual a porcentagem de reajuste?\n");
scanf("%d",&reajuste);
valornovo=valor+(reajuste*0.01*valor);
printf("O novo valor com reajuste � de %.2f",valornovo);

}
void main()
{
setlocale(0,"Portuguese");
saldo();
}

#endif // ex6

#ifdef ex7
/*Fa�a um programa que leia a base e a altura de um ret�ngulo e imprima o perimetro, a �rea e a diagonal. Para fazer os c�lculos, implemente tr�s fun��es, cada
uma deve realizar um c�lculo especifico conforme solicitado. Utilize as f�rmulas
a seguir.*/

void dados(int *base,int *altura){


printf("Digite o valor da base do tri�ngulo:");
scanf("%d",&*base);
printf("\nDigite o valor da altura do tri�ngulo:");
scanf("%d",&*altura);

}

void perimetro(int base,int altura){
int peri;
peri=2*(base+altura);
printf("O per�metro do tri�ngulo � %d.\n",peri);

}

void area(int base,int altura){
int areat;
areat=base*altura;
printf("A �rea do tri�ngulo � %d.\n",areat);
}

void diagonal(int base,int altura){
float diag;
diag=sqrt(pow(base,2)+pow(altura,2));
printf("A diagonal do tri�ngulo � %.2f\n",diag);
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
/*Fa�a um programa que leia o raio de um circulo e imprima o per�metro e a �rea.
Para fazer os c�lculos, implemente duas fun��es, cada uma deve realizar um
c�lculo especifico conforme solicitado. Utilize as f�rmulas a seguir*/

int dados(){
int raio;
printf("Digite o valor do raio do circulo:",raio);
scanf("%d",&raio);
return raio;
}

void perimetro(int raio){
float peri;
peri=2*3.14*raio;
printf("\nO perimetro do circulo �:%.2f.",peri);
}

void area(int raio){
float areat;
areat=3.14*pow(raio,2);
printf("\nO valor da �rea do c�rculo � %.2f",areat);
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

printf("Digite um n�mero inteiro:\n");
scanf("%d",&num);

return num;
}

void pares(int num){

int nump,contador;
printf("Os n�meros pares s�o:\n");
for(contador=1;contador<=num;contador++){
if(contador%2==0){
    nump=contador;
printf("%d ",nump);}
}
}

void impar(int num){

int impares,contador;

printf("\nOs n�meros �mpares s�o:\n");

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

printf("Digite 10 n�meros inteiros:\n");

for(contador=1;contador<=10;contador++){
printf("\nDigite o %d� n�mero:",contador);
scanf("%d",&numeros[contador]);
}

}

int maior() {
int contador,maior=numeros[1];

printf("\nO maior n�mero digitado �:");
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

//2. Fa�a um programa que imprima todos os n�meros pares de 100 at� 1.


int main(){

printf("Esse programa ir� imprimir os n�meros pares partindo do 100 at� o n�mero 1.\n");

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
