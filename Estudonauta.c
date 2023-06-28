#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

/*************************************
*          Programa criado por       *
*             Ju Brondino            *
*                                    *
*                                    *
*************************************/

void main()


#define ex25

{

    #ifdef ex 1
 setlocale (0,"Portuguese");

   printf("Listagem de Alunos\n");
   printf("Nome \b Nota \n");
   printf("-----------------\n");
   printf("Ana Beatriz \t 8.5 \nBianca Martins \t 9.0\nClaúdio Sá \t 5.5 \nGiovana Silva \t 7.5 \n");
#endif // ex1

#ifdef ex2
setlocale (0,"Portuguese");
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf (" \\a \t = \t Beep \n");
printf (" \\n \t = \t Nova linha \n");
printf (" \\t \t = \t Tabulação \n");
printf (" \\\ \t = \t Barra \n");
printf (" %% \t = \t Porcentagem \n");
printf (" \? \t = \t Interrogração \n");
printf ("+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

#endif // ex2

#ifdef ex3
setlocale(0,"Portuguese");
unsigned int idade=33;
float peso= 84;
char sexo='F';
char *nome= "Juliana";

printf(" %s é do sexo %c, tem %i anos e pesa %.1fkg", nome,sexo,idade,peso);

#endif // ex3

#ifdef ex4
setlocale(0,"Portuguese");
char nome1[20],nome2[20],nome3[20];
char sexo1,sexo2,sexo3;
float nota1,nota2,nota3;

printf("Cadastrando a primeira pessoa\n");
printf("-----------------------------\n");
fflush(stdin);
printf("Nome:");
gets(nome1);
printf("Sexo: F ou M: ");
scanf("%c",&sexo1);
printf("Nota:");
scanf("%f", &nota1);

printf("\nCadastrando a segunda pessoa\n");
printf("-----------------------------\n");
fflush(stdin);
printf("Nome:");
gets(nome2);
printf("Sexo: F ou M: ");
scanf("%c",&sexo2);
printf("Nota:");
scanf("%f",&nota2);



printf("\nCadastrando a terceira pessoa\n");
printf("-----------------------------\n");
fflush(stdin);
printf("Nome:");
gets(nome3);
printf("Sexo: F ou M: ");
scanf("%c",&sexo3);
printf("Nota:");
scanf("%f",&nota3);

printf("\n\nLISTAGEM COMPLETA");
printf("\n-----------------------------------\n");
printf("NOME                 SEXO \tNOTA\n");
printf("%-20s  %c  \t%1.f\n",nome1,sexo1,nota1);
printf("%-20s  %c  \t%1.f\n",nome2,sexo2,nota2);
printf("%-20s  %c  \t%1.f\n",nome3,sexo3,nota3);
printf("\n-----------------------------------\n");

#endif // ex4

#ifdef ex5
setlocale(0,"Portuguese");
    int x, n;
    srand(time(NULL));
    n = rand() % 5 + 1;
    printf("<<<EX005-Sera que você acerta?>>>\n");
    printf("Vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é seu palpite?\n");
    scanf("%d", &x);
    printf ("Eu gerei o numero (%d) e você escolheu o (%d)",n,x);

#endif // ex5


#ifdef ex6
setlocale(0,"Portuguese");
int numero,antecessor,sucessor;



printf("Digite um número:\n");
scanf("%i", &numero);
antecessor= numero- 1;
sucessor=numero+1;
printf("O sucessor de %i é %i e o antecessor é %i",numero,antecessor,sucessor);
#endif // ex6

#ifdef ex7
setlocale(0,"Portuguese");
float numero,dobro,terca;

printf("Digite um número:\n");
scanf("%f",&numero);
dobro= numero*2;
terca=numero/3;
printf("O dobro de %.1f é %.1f e a terça parte é %.2f",numero,dobro,terca);


#endif // ex7

#ifdef ex8
setlocale (0,"Portuguese");
char letra, antecessor,sucessor;
printf("Digite uma letra:\n");
scanf("%c", &letra);
antecessor= letra-1;
sucessor= letra+1;
printf("Antes da letra %c é a letra %c e depois a letra %c", letra,antecessor,sucessor);

#endif // ex8

#ifdef ex9
setlocale(0,"Portuguese");
float nota1,nota2,media;
char nome[20];

printf("Digite seu nome:\n");
fflush (stdin);
gets (nome);
printf("Digite a sua nota da primeira prova:\n");
fflush (stdin);
scanf("%f", &nota1);
printf("Digite a sua nota da segunda prova:\n");
fflush (stdin);
scanf("%f",&nota2);
media=(nota1+nota2)/2;
printf("%s, você tirou %.1f na primeira prova e %.1f na segunda prova e sua média é %.1f",nome,nota1,nota2,media);
fflush (stdin);

#endif // ex9

#ifdef ex10
setlocale(0,"Portuguese");
char *produto[20];
float precoi, desconto, precof;

printf("Produto:\n");
fflush(stdin);
gets(produto);
printf("Preço do produto\n");
scanf("%f", &precoi);
printf("Desconto a ser aplicado:\n");
scanf("%f", &desconto);
precof=precoi-(precoi*desconto/100);
printf("O valor do %s é %.1f reais, mas com %.1f %% de desconto, passa a custar %.1f reais",produto,precoi,desconto,precof);



#endif // ex10

#ifdef ex11
//programa que pede pro usuário digitar 2 numeros e após mostrar n1|n2, n1&n2,n1^n2
setlocale(0,"Portuguese");
int n1, n2;
printf("Digite um número inteiro e positivo:  ");
scanf("%d",&n1);
printf("Digite outro número inteiro e positivo  ");
scanf("%d",&n2);
printf("--------OPERAÇÕES BITWISE----------\n");
printf("Calculando %d|%d o resultado é %d\n",n1,n2,(n1|n2));
printf("Calculando %d&%d o resultado é %d\n",n1,n2,(n1&n2));
printf("Calculando %d^%d o resultado é %d\n",n1,n2,(n1^n2));
#endif // ex11

#ifdef ex12
setlocale(0,"Portuguese");
float valor,desconto;

printf("Digite o valor total das compras:\n");
scanf("%f",&valor);

if (valor>500) {
    desconto=valor*0.1;
    printf("=========ATENÇÃO===========\n");
    printf("Por fazer mais de R$ 500 em compras, você vai receber %.2f de desconto.\n",desconto);
    printf("O valor a ser pago é de %.2f\n",valor-desconto);
}
printf("Você gastou %.2f reais. Volte sempre.",valor);

#endif // ex

#ifdef ex13
setlocale(0,"Portuguese");
time_t t;
struct tm *data;
time(&t);
data=localtime(&t);
int ano= data->tm_year+1900;
int nascimento;

printf("Olá! Em que ano você nasceu?\n");
scanf("%d",&nascimento);
printf("Você tem %d anos. Certo?",ano-nascimento);



#endif // ex13

#ifdef ex14
setlocale(0,"Portuguese");
time_t t;
struct tm *data;
time(&t);
data=localtime(&t);
int ano= data->tm_year+1900;
int nascimento;

printf("Estamos no ano de %d.\n",ano);
printf("Em que ano você nasceu?\n");
scanf("%d",&nascimento);
printf("-------------------------------------\n");
printf("Sua idade atual é de %d\n",ano-nascimento);
if (ano-nascimento>18){
    printf("Você já tem mais de 18 anos, espero que tenha se alistado.\n");
}

else {
    printf("Você ainda não tem 18 anos portanto não pode se alistar.");
}
#endif // ex14

#ifdef ex15
setlocale(0,"Portuguese");
int ano;

printf("Digite um ano qualquer:\n");
scanf("%d",&ano);

if (ano%4==0 && ano%100!=0) {
    printf("O ano %d é um ano bissexto.\n",ano);
}
else {
    printf("O ano %d não é um ano bissexto.\n",ano);
}

#endif // ex15

#ifdef ex16
setlocale(0,"Portuguese");
int numero;

printf("Digite um número quaisquer que direi se ele é positivo, negativo ou nulo:\n");
scanf("%d",&numero);

if(numero>0){
    printf("O número digitado é positivo");
}

else if (numero<0){
    printf("O número digitado é negativo");
}

else if (numero==0){
    printf("O número digitado é NULO");
}


#endif // ex16

#ifdef ex17
int num1,num2;
setlocale(0,"Portuguese");
printf("Esse programa tem por finalidade colocar os números digitados em ordem crescente.\n\n");

printf("Digite o primeiro número:\n");
scanf("%d",&num1);

printf("Digite o segundo número:\n");
scanf("%d",&num2);

if (num1>num2){
    printf("Os dois números em ordem são %d e %d",num2,num1);
}
else if(num1<num2){
    printf("Os dois números em ordem são %d e %d",num1,num2);
}

else if (num1==num2){
    printf("Os dois números são iguais.");
}

#endif // ex17

#ifdef ex18
setlocale(0,"Portuguese");
time_t t;
struct tm*data;
time(&t);
data=localtime(&t);

int ano=data->tm_year+1900;
int nascimento,idade,alistamento;

printf("Estamos no ano de %d.\n",ano);
printf("Em que ano você nasceu?\n");
scanf("%d",&nascimento);
printf("----------------------------------\n");
idade=ano-nascimento;
printf("Sua idade atual é %d anos.\n",idade);
alistamento=ano-(idade-18);
if(idade>18){
    printf("Seu alistamento foi em %d. Já se passaram %d anos.",alistamento,idade-18);

}

else if(idade<18){
    printf("Seu alistamento será em %d.",nascimento+18);
}

else if(idade==18){
    printf("Você completa 18 anos exatamente em %d. Vá se alistar!n\",ano);
}
printf("------------------------------------");
#endif // ex18

#ifdef ex19

setlocale(0,"Portuguese");
char estado[20];

printf("Em que estado do Brasil você nasceu?");
fgets(estado,20,stdin);

 if (strcmp(estado,"SP") || strcmp(estado,"São Paulo"))
    {
        printf("Nascendo em %s você é paulista.\n", estado);
    }

else if (strcmp(estado,"MG")|| strcmp(estado,"Minas Gerais")){
        printf("Nascendo em %s você é mineiro.\n", estado);
 }
else if (strcmp(estado,"ES")|| strcmp(estado,"Espiríto Santo")){
    printf("Nascendo em %s você é capixaba.\n",estado);
}
else if (strcmp(estado,"RJ")|| strcmp(estado,"Rio de Janeiro")){
    printf("Nascendo em %s você é carioca.\n",estado);
}
else if (strcmp(estado,"GO")|| strcmp(estado,"Goiás"))
{
printf("Nascendo em %s você é goiano.\n",estado);
}
else if (strcmp(estado,"PR")|| strcmp(estado,"Paraná")){
    printf("Nascendo em %s você é paranaense\n",estado);
}

#endif // ex19

#ifdef ex20

float num1, num2,resultado;
char operacao;

printf("Digite um número:\n");
scanf("%f",&num1);
printf("Digite outro número:\n");
scanf("%f",&num2);
printf("=============================\n");
printf("Digite +\tAdição");
printf("Digite -\tSubtração");
printf("Digite *\tMultiplicação");
printf("Digite /\tDivisão");
printf("=============================\n");
printf("Digite a operação que deseja executar:");
scanf("%c",&operacao);
printf("------------------------------\n");

switch(operacao){

case + :
operacao=+ ;
resultado=num1+num2;
break;

}

printf("O resultado de %f %c %f é %f.",num1,operacao,num2,resultado);
#endif // ex20

#ifdef ex21
float preco,total;
int opcao;
setlocale(0,"Portuguese");
printf("Digite o preço de um produto: R$ ");
scanf("%f",&preco);

printf("Escolha o período:\n");
printf("\tDigite 1: Carnaval[+10%]\n \tDigite 2:Férias escolares[+20%]\n \tDigite 3:Dia das crianças[+5]\n \tDigite 4:Black friday[-30]\n \tDigite 5:Natal[-5]\n");
scanf("%d",&opcao);

switch(opcao)
{
case 1:
total=preco+(preco*0.1);
break;

case 2:
    total=preco+(preco*0.2);
break;

case 3:
    total=preco+(preco*0.05);
break;

case 4:
    total=preco-(preco*0.3);
break;
case 5:
total=preco-(preco*0.05);
break;

default:
    printf("Digite um número válido.\n");

}

printf("Nessa época o preço do produto é %.2f",total);

#endif // ex21

#ifdef ex22
setlocale(0,"Portuguese");
/*Digite um número podendo ser ele positivo ou negativo
Se positivo - mostre o inverso
se negativo - mostre o oposto*/


float num,resultado;

printf("Digite um número inteiro podendo ser ele positivo ou negativo.\n");
scanf("%f",&num);

if(num>0) {
    resultado=1/num;
    printf("O inverso de %.0f é %.2f",num,resultado);
}

else{
    resultado=num*(-1);
    printf("O oposto de %.0f é %.2f",num,resultado);
}

#endif // ex
#ifdef ex23

setlocale(0,"Portuguese");
int numero;
printf("Digite um número qualquer:\n");
scanf("%d",&numero);

if(numero%2==0)
{
printf("Esse número é par.");
}

else {
    printf("Esse número é impar");
}
#endif // ex23

#ifdef ex24
/*A variavel N representa a quantidade de numeros desejada pelo usuário que deverá ser inferior a 50.
A variável num representa cada número digitado plo usuário. Exiba uma mensagem informando a média dos números
divísiveis por 5 e a quantidade de numeros superiores a 70. Se não foi digitado
nenhum número divisível por 5 informe ao usuario. Informe também se não tiver digitado nenum número superior a 70.*/
setlocale(0,"Portuguese");
int n,contador,num[49],soma=0,quantidade70;
float media,quantidade5;
printf("Esse programa tem por finalidade pedir ao usuário que escolha quantos números irá digitar. Posteriormente o programa verifica quantos números são divisiveis por 5 e mostra a média deles e quantos números digitados são maiores que 70. Se não houver nenhum número divisível por 5 ele dará uma mensagem informando.\n\n");
printf("Digite a quantidade de números que deseja digitar(Ps: menor que 50):\n");
scanf("%d",&n);


while(n>=50) {
    printf("Digite um número entre 0 e 50:\n");
    scanf("%d",&n);
}


for(contador=1;contador<=n;contador++)
{
printf("Digite o %dº número:\n",contador);
scanf("%d",&num[contador]);


if (num[contador]%5==0){
    soma+=num[contador];
    quantidade5++;
}

if(num[contador]>70)

{

quantidade70++;
}

}
 media=soma/quantidade5;
if(soma==0)
{
printf("Não foram digitados números divisíveis por 5.\n");
}

else {
    printf("A média dos números divisiveis por 5 é %.2f.\n",media);
}

if(quantidade70==0){
    printf("Não foram digitados números maiores que 70.\n");
}
else{
printf("A quantidade de números maiores que 70 digitados é %d.\n",quantidade70);
}


#endif // ex24

#ifdef ex25

/*Receba via teclado um valor inteiro positivo N que representa a quantidade de números desejada pelo usuário.
Receba também a variavel num que reprensetará cada numero digitado pelo usuario e escreva a mensagem "é perfeito" ou "nao é perfeito".
*/
int n,contador; // variaveis para iniciar o programa
setlocale(0,"Portuguese");// Colocando o programa em português, dessa forma é possível acentuar.
printf("Digite a quantidade de números que deseja incluir.\n");// Faz aparecer na tela a mensagem entre ""
scanf("%d",&n); //faz o computador armazenar o número.(Entrada de dados)

while(n<0) {
    printf("Digite um número maior que 0.\n");
    scanf("%d",&n);
} /*quando o número digitado pelo usuário for menor que 0 o programa exibirá uma mensagem para que o usuario digite
um número maior que zero e novamente armazena o número. Como é um laço, toda vez que o número for menor que 0 ele vai
executar esses comandos*/

int num[n]; /* Como agora já temos a quantidade de entradas, adicionamos uma variável para armazená-las.
Então dentro da variavél num terá n termos.*/


for (contador=1;contador<=n;contador++)
/*Esse é um laço de repetição: o 1º termo dele (contador=1) é a premissa que iniciaremos o contator
2ºtermo (contador<=n) quer dizer que as instruções vão ser repetidas até contador seja menor ou = a quantidade de n que foi passada pelo usuário
3º termo é como o contador vai se comportar, nesse caso é de 1 em 1.*/
{
printf("Digite o %dº número:\n",contador); /*Vai imprimir na tela a mensagem, sendo %d = contador,
lembrando que o contador começa em 1 e vai adicionando de 1 em 1, sendo assim o próximo %d é 2 assim por diante*/
scanf("%d",&num[n]); // armazena o número inserido.

/* o programa precisa verificar se o número é perfeito e mostrar a mensagem na tela antes de ir pra próxima
entrada de dados portanto precisaremos de outro laço for dentro do primeiro*/
int divpossiveis,soma=0;//variaveis que serão usadas a partir daqui
for (divpossiveis=1;divpossiveis<=num[n]/2;divpossiveis++)
/*para sabermos quais os divisores de um número, precisamos testar a divisão por todos os números até a sua metade
ou seja, se o número digitado for 10, precisamos testar todos os numeros até 5 para verificar quais são ou não divisiveis
O que diz esse laço:
Vamos verificar os possiveis divisores do número digitado.
1º termo: Sempre começaremos com 1 já que 1 é o primeiro divisor de qualquer número.
2ª termo: Vamos verificar todos os números até ele ser = a metade do número digitado
3º termo: Vamos verificar de 1 em 1 esses números*/
{

if (num[n]%divpossiveis==0)
/*Se a divisão do número digitado pelo divpossivel for = 0, então ele é um divisor.*/
{
//Se ele é um  divisor, vamos guardá-lo e soma-lo ao proximo divisor testado como abaixo:
soma+=divpossiveis;
}

}/*fechamos o laço for. Ele vai ficar verificando quais são os divisores até n/2 e se forem vão ser somados e
armazenados na variável soma.*/


if(soma==num[n])//Laço que verificará se a soma dos divisores é igual ao número digitado.
{
 printf("É um número perfeito.\n"); // Se for igual é um número perfeito e essa mensagem será exibida na tela.
}
else // se a soma dos divisores for diferente do número digitado.
    {
    printf("Não é um número perfeito.\n");// será impressa essa mensagem na tela.
}
//começa tudo de novo até o contador ser > que o número digitado, quando isso acontecer o programa se encerarrá
}


#endif // ex25

#ifdef ex26


#endif // ex26


}
