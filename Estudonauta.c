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
   printf("Ana Beatriz \t 8.5 \nBianca Martins \t 9.0\nCla�dio S� \t 5.5 \nGiovana Silva \t 7.5 \n");
#endif // ex1

#ifdef ex2
setlocale (0,"Portuguese");
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf (" \\a \t = \t Beep \n");
printf (" \\n \t = \t Nova linha \n");
printf (" \\t \t = \t Tabula��o \n");
printf (" \\\ \t = \t Barra \n");
printf (" %% \t = \t Porcentagem \n");
printf (" \? \t = \t Interrogra��o \n");
printf ("+-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

#endif // ex2

#ifdef ex3
setlocale(0,"Portuguese");
unsigned int idade=33;
float peso= 84;
char sexo='F';
char *nome= "Juliana";

printf(" %s � do sexo %c, tem %i anos e pesa %.1fkg", nome,sexo,idade,peso);

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
    printf("<<<EX005-Sera que voc� acerta?>>>\n");
    printf("Vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � seu palpite?\n");
    scanf("%d", &x);
    printf ("Eu gerei o numero (%d) e voc� escolheu o (%d)",n,x);

#endif // ex5


#ifdef ex6
setlocale(0,"Portuguese");
int numero,antecessor,sucessor;



printf("Digite um n�mero:\n");
scanf("%i", &numero);
antecessor= numero- 1;
sucessor=numero+1;
printf("O sucessor de %i � %i e o antecessor � %i",numero,antecessor,sucessor);
#endif // ex6

#ifdef ex7
setlocale(0,"Portuguese");
float numero,dobro,terca;

printf("Digite um n�mero:\n");
scanf("%f",&numero);
dobro= numero*2;
terca=numero/3;
printf("O dobro de %.1f � %.1f e a ter�a parte � %.2f",numero,dobro,terca);


#endif // ex7

#ifdef ex8
setlocale (0,"Portuguese");
char letra, antecessor,sucessor;
printf("Digite uma letra:\n");
scanf("%c", &letra);
antecessor= letra-1;
sucessor= letra+1;
printf("Antes da letra %c � a letra %c e depois a letra %c", letra,antecessor,sucessor);

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
printf("%s, voc� tirou %.1f na primeira prova e %.1f na segunda prova e sua m�dia � %.1f",nome,nota1,nota2,media);
fflush (stdin);

#endif // ex9

#ifdef ex10
setlocale(0,"Portuguese");
char *produto[20];
float precoi, desconto, precof;

printf("Produto:\n");
fflush(stdin);
gets(produto);
printf("Pre�o do produto\n");
scanf("%f", &precoi);
printf("Desconto a ser aplicado:\n");
scanf("%f", &desconto);
precof=precoi-(precoi*desconto/100);
printf("O valor do %s � %.1f reais, mas com %.1f %% de desconto, passa a custar %.1f reais",produto,precoi,desconto,precof);



#endif // ex10

#ifdef ex11
//programa que pede pro usu�rio digitar 2 numeros e ap�s mostrar n1|n2, n1&n2,n1^n2
setlocale(0,"Portuguese");
int n1, n2;
printf("Digite um n�mero inteiro e positivo:  ");
scanf("%d",&n1);
printf("Digite outro n�mero inteiro e positivo  ");
scanf("%d",&n2);
printf("--------OPERA��ES BITWISE----------\n");
printf("Calculando %d|%d o resultado � %d\n",n1,n2,(n1|n2));
printf("Calculando %d&%d o resultado � %d\n",n1,n2,(n1&n2));
printf("Calculando %d^%d o resultado � %d\n",n1,n2,(n1^n2));
#endif // ex11

#ifdef ex12
setlocale(0,"Portuguese");
float valor,desconto;

printf("Digite o valor total das compras:\n");
scanf("%f",&valor);

if (valor>500) {
    desconto=valor*0.1;
    printf("=========ATEN��O===========\n");
    printf("Por fazer mais de R$ 500 em compras, voc� vai receber %.2f de desconto.\n",desconto);
    printf("O valor a ser pago � de %.2f\n",valor-desconto);
}
printf("Voc� gastou %.2f reais. Volte sempre.",valor);

#endif // ex

#ifdef ex13
setlocale(0,"Portuguese");
time_t t;
struct tm *data;
time(&t);
data=localtime(&t);
int ano= data->tm_year+1900;
int nascimento;

printf("Ol�! Em que ano voc� nasceu?\n");
scanf("%d",&nascimento);
printf("Voc� tem %d anos. Certo?",ano-nascimento);



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
printf("Em que ano voc� nasceu?\n");
scanf("%d",&nascimento);
printf("-------------------------------------\n");
printf("Sua idade atual � de %d\n",ano-nascimento);
if (ano-nascimento>18){
    printf("Voc� j� tem mais de 18 anos, espero que tenha se alistado.\n");
}

else {
    printf("Voc� ainda n�o tem 18 anos portanto n�o pode se alistar.");
}
#endif // ex14

#ifdef ex15
setlocale(0,"Portuguese");
int ano;

printf("Digite um ano qualquer:\n");
scanf("%d",&ano);

if (ano%4==0 && ano%100!=0) {
    printf("O ano %d � um ano bissexto.\n",ano);
}
else {
    printf("O ano %d n�o � um ano bissexto.\n",ano);
}

#endif // ex15

#ifdef ex16
setlocale(0,"Portuguese");
int numero;

printf("Digite um n�mero quaisquer que direi se ele � positivo, negativo ou nulo:\n");
scanf("%d",&numero);

if(numero>0){
    printf("O n�mero digitado � positivo");
}

else if (numero<0){
    printf("O n�mero digitado � negativo");
}

else if (numero==0){
    printf("O n�mero digitado � NULO");
}


#endif // ex16

#ifdef ex17
int num1,num2;
setlocale(0,"Portuguese");
printf("Esse programa tem por finalidade colocar os n�meros digitados em ordem crescente.\n\n");

printf("Digite o primeiro n�mero:\n");
scanf("%d",&num1);

printf("Digite o segundo n�mero:\n");
scanf("%d",&num2);

if (num1>num2){
    printf("Os dois n�meros em ordem s�o %d e %d",num2,num1);
}
else if(num1<num2){
    printf("Os dois n�meros em ordem s�o %d e %d",num1,num2);
}

else if (num1==num2){
    printf("Os dois n�meros s�o iguais.");
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
printf("Em que ano voc� nasceu?\n");
scanf("%d",&nascimento);
printf("----------------------------------\n");
idade=ano-nascimento;
printf("Sua idade atual � %d anos.\n",idade);
alistamento=ano-(idade-18);
if(idade>18){
    printf("Seu alistamento foi em %d. J� se passaram %d anos.",alistamento,idade-18);

}

else if(idade<18){
    printf("Seu alistamento ser� em %d.",nascimento+18);
}

else if(idade==18){
    printf("Voc� completa 18 anos exatamente em %d. V� se alistar!n\",ano);
}
printf("------------------------------------");
#endif // ex18

#ifdef ex19

setlocale(0,"Portuguese");
char estado[20];

printf("Em que estado do Brasil voc� nasceu?");
fgets(estado,20,stdin);

 if (strcmp(estado,"SP") || strcmp(estado,"S�o Paulo"))
    {
        printf("Nascendo em %s voc� � paulista.\n", estado);
    }

else if (strcmp(estado,"MG")|| strcmp(estado,"Minas Gerais")){
        printf("Nascendo em %s voc� � mineiro.\n", estado);
 }
else if (strcmp(estado,"ES")|| strcmp(estado,"Espir�to Santo")){
    printf("Nascendo em %s voc� � capixaba.\n",estado);
}
else if (strcmp(estado,"RJ")|| strcmp(estado,"Rio de Janeiro")){
    printf("Nascendo em %s voc� � carioca.\n",estado);
}
else if (strcmp(estado,"GO")|| strcmp(estado,"Goi�s"))
{
printf("Nascendo em %s voc� � goiano.\n",estado);
}
else if (strcmp(estado,"PR")|| strcmp(estado,"Paran�")){
    printf("Nascendo em %s voc� � paranaense\n",estado);
}

#endif // ex19

#ifdef ex20

float num1, num2,resultado;
char operacao;

printf("Digite um n�mero:\n");
scanf("%f",&num1);
printf("Digite outro n�mero:\n");
scanf("%f",&num2);
printf("=============================\n");
printf("Digite +\tAdi��o");
printf("Digite -\tSubtra��o");
printf("Digite *\tMultiplica��o");
printf("Digite /\tDivis�o");
printf("=============================\n");
printf("Digite a opera��o que deseja executar:");
scanf("%c",&operacao);
printf("------------------------------\n");

switch(operacao){

case + :
operacao=+ ;
resultado=num1+num2;
break;

}

printf("O resultado de %f %c %f � %f.",num1,operacao,num2,resultado);
#endif // ex20

#ifdef ex21
float preco,total;
int opcao;
setlocale(0,"Portuguese");
printf("Digite o pre�o de um produto: R$ ");
scanf("%f",&preco);

printf("Escolha o per�odo:\n");
printf("\tDigite 1: Carnaval[+10%]\n \tDigite 2:F�rias escolares[+20%]\n \tDigite 3:Dia das crian�as[+5]\n \tDigite 4:Black friday[-30]\n \tDigite 5:Natal[-5]\n");
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
    printf("Digite um n�mero v�lido.\n");

}

printf("Nessa �poca o pre�o do produto � %.2f",total);

#endif // ex21

#ifdef ex22
setlocale(0,"Portuguese");
/*Digite um n�mero podendo ser ele positivo ou negativo
Se positivo - mostre o inverso
se negativo - mostre o oposto*/


float num,resultado;

printf("Digite um n�mero inteiro podendo ser ele positivo ou negativo.\n");
scanf("%f",&num);

if(num>0) {
    resultado=1/num;
    printf("O inverso de %.0f � %.2f",num,resultado);
}

else{
    resultado=num*(-1);
    printf("O oposto de %.0f � %.2f",num,resultado);
}

#endif // ex
#ifdef ex23

setlocale(0,"Portuguese");
int numero;
printf("Digite um n�mero qualquer:\n");
scanf("%d",&numero);

if(numero%2==0)
{
printf("Esse n�mero � par.");
}

else {
    printf("Esse n�mero � impar");
}
#endif // ex23

#ifdef ex24
/*A variavel N representa a quantidade de numeros desejada pelo usu�rio que dever� ser inferior a 50.
A vari�vel num representa cada n�mero digitado plo usu�rio. Exiba uma mensagem informando a m�dia dos n�meros
div�siveis por 5 e a quantidade de numeros superiores a 70. Se n�o foi digitado
nenhum n�mero divis�vel por 5 informe ao usuario. Informe tamb�m se n�o tiver digitado nenum n�mero superior a 70.*/
setlocale(0,"Portuguese");
int n,contador,num[49],soma=0,quantidade70;
float media,quantidade5;
printf("Esse programa tem por finalidade pedir ao usu�rio que escolha quantos n�meros ir� digitar. Posteriormente o programa verifica quantos n�meros s�o divisiveis por 5 e mostra a m�dia deles e quantos n�meros digitados s�o maiores que 70. Se n�o houver nenhum n�mero divis�vel por 5 ele dar� uma mensagem informando.\n\n");
printf("Digite a quantidade de n�meros que deseja digitar(Ps: menor que 50):\n");
scanf("%d",&n);


while(n>=50) {
    printf("Digite um n�mero entre 0 e 50:\n");
    scanf("%d",&n);
}


for(contador=1;contador<=n;contador++)
{
printf("Digite o %d� n�mero:\n",contador);
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
printf("N�o foram digitados n�meros divis�veis por 5.\n");
}

else {
    printf("A m�dia dos n�meros divisiveis por 5 � %.2f.\n",media);
}

if(quantidade70==0){
    printf("N�o foram digitados n�meros maiores que 70.\n");
}
else{
printf("A quantidade de n�meros maiores que 70 digitados � %d.\n",quantidade70);
}


#endif // ex24

#ifdef ex25

/*Receba via teclado um valor inteiro positivo N que representa a quantidade de n�meros desejada pelo usu�rio.
Receba tamb�m a variavel num que reprensetar� cada numero digitado pelo usuario e escreva a mensagem "� perfeito" ou "nao � perfeito".
*/
int n,contador; // variaveis para iniciar o programa
setlocale(0,"Portuguese");// Colocando o programa em portugu�s, dessa forma � poss�vel acentuar.
printf("Digite a quantidade de n�meros que deseja incluir.\n");// Faz aparecer na tela a mensagem entre ""
scanf("%d",&n); //faz o computador armazenar o n�mero.(Entrada de dados)

while(n<0) {
    printf("Digite um n�mero maior que 0.\n");
    scanf("%d",&n);
} /*quando o n�mero digitado pelo usu�rio for menor que 0 o programa exibir� uma mensagem para que o usuario digite
um n�mero maior que zero e novamente armazena o n�mero. Como � um la�o, toda vez que o n�mero for menor que 0 ele vai
executar esses comandos*/

int num[n]; /* Como agora j� temos a quantidade de entradas, adicionamos uma vari�vel para armazen�-las.
Ent�o dentro da variav�l num ter� n termos.*/


for (contador=1;contador<=n;contador++)
/*Esse � um la�o de repeti��o: o 1� termo dele (contador=1) � a premissa que iniciaremos o contator
2�termo (contador<=n) quer dizer que as instru��es v�o ser repetidas at� contador seja menor ou = a quantidade de n que foi passada pelo usu�rio
3� termo � como o contador vai se comportar, nesse caso � de 1 em 1.*/
{
printf("Digite o %d� n�mero:\n",contador); /*Vai imprimir na tela a mensagem, sendo %d = contador,
lembrando que o contador come�a em 1 e vai adicionando de 1 em 1, sendo assim o pr�ximo %d � 2 assim por diante*/
scanf("%d",&num[n]); // armazena o n�mero inserido.

/* o programa precisa verificar se o n�mero � perfeito e mostrar a mensagem na tela antes de ir pra pr�xima
entrada de dados portanto precisaremos de outro la�o for dentro do primeiro*/
int divpossiveis,soma=0;//variaveis que ser�o usadas a partir daqui
for (divpossiveis=1;divpossiveis<=num[n]/2;divpossiveis++)
/*para sabermos quais os divisores de um n�mero, precisamos testar a divis�o por todos os n�meros at� a sua metade
ou seja, se o n�mero digitado for 10, precisamos testar todos os numeros at� 5 para verificar quais s�o ou n�o divisiveis
O que diz esse la�o:
Vamos verificar os possiveis divisores do n�mero digitado.
1� termo: Sempre come�aremos com 1 j� que 1 � o primeiro divisor de qualquer n�mero.
2� termo: Vamos verificar todos os n�meros at� ele ser = a metade do n�mero digitado
3� termo: Vamos verificar de 1 em 1 esses n�meros*/
{

if (num[n]%divpossiveis==0)
/*Se a divis�o do n�mero digitado pelo divpossivel for = 0, ent�o ele � um divisor.*/
{
//Se ele � um  divisor, vamos guard�-lo e soma-lo ao proximo divisor testado como abaixo:
soma+=divpossiveis;
}

}/*fechamos o la�o for. Ele vai ficar verificando quais s�o os divisores at� n/2 e se forem v�o ser somados e
armazenados na vari�vel soma.*/


if(soma==num[n])//La�o que verificar� se a soma dos divisores � igual ao n�mero digitado.
{
 printf("� um n�mero perfeito.\n"); // Se for igual � um n�mero perfeito e essa mensagem ser� exibida na tela.
}
else // se a soma dos divisores for diferente do n�mero digitado.
    {
    printf("N�o � um n�mero perfeito.\n");// ser� impressa essa mensagem na tela.
}
//come�a tudo de novo at� o contador ser > que o n�mero digitado, quando isso acontecer o programa se encerarr�
}


#endif // ex25

#ifdef ex26


#endif // ex26


}
