#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define ex2

//Crie um programa dividido em funções que:
//a)Função soma: receba dois números e exiba a soma entre eles
//b) função multiplicação: receba tres numeros e exiba a multiplicação entre eles

#ifdef ex1
void soma()
{
setlocale(0,"Portuguese");
int n1,n2,soma;
printf("Digite dois números inteiros\n");
printf("Digite o primeiro número\n");
scanf("%d",&n1);
printf("Digite o segundo número\n");
scanf("%d",&n2);
soma=n1+n2;
printf("A soma dos dois números é %d\n",soma);
}

void multiplicacao()
{
int n1,n2,n3,multiplicacao;
setlocale(0,"Portuguese");
printf("Digite 3 números inteiros:\n");
printf("Digite o primeiro número:\n");
scanf("%d",&n1);
printf("Digite o segundo número:\n");
scanf("%d",&n2);
printf("Digite o terceiro número:\n");
scanf("%d",&n3);
multiplicacao=n1*n2*n3;
printf("A multiplicação dos três números é %d",multiplicacao);
}

int main()
{

soma();
multiplicacao();
return 0;
}
#endif // ex1

#ifdef ex2
//Crie um programa dividido em funções:
    //a)Cadastro:armazene no vetor A cinco numeros quaisquer.
    //b)Maior_Numero:mostre o maior número encotrado.
    //c)Média:exiba a média dos numeros digitados.
void cadastro( int numeros[])
{
    int contador;

    for (contador=0;contador<5;contador++){
        printf("Digite %dº número: ",contador+1);
        scanf("%d",&numeros[contador]);
    }
}
void media(int numeros[])
{
int contador;
float media,soma=0;
for(contador=0;contador<5;contador++) {
soma+=numeros[contador];
}
media=soma/5;

printf("A média dos números é %.2f",media);
}
void maior(int numeros[])
{
    int contador, maior = numeros[0];

    for (contador = 1; contador < 5; contador++) {
        if (numeros[contador] > maior) {
            maior = numeros[contador];
        }
    }

    printf(" e o maior número é %d", maior);
}

int main()
{
setlocale(0,"Portuguese");
int numeros[5];
  cadastro(numeros);

    media(numeros);

maior(numeros);

    return 0;
}
#endif // ex


#ifdef ex3

////Crie um programa dividido em funções:
    //a)Cadastro:armazene no vetor A no mínimo 4 e no máximo 7 numeros quaisquer.
    //b)Num127: em que posições o número 127 apareceu no vetor A.
    //c)Média:exiba a média apenas dos numeros  positivos digitados.
int quantidade,numero[7];
void cadastro ()
{
int contador=0;
printf("Preciso de 4-7 números aleatórios. Quantos números deseja digitar?\n");
scanf ("%d",&quantidade);

while (quantidade < 4 || quantidade > 7)
{
printf("Quantidade inválida. Escolha a quantidade de números a ser digitada (entre 4 e 7:\n");
scanf ("%d",&quantidade);
}
for (contador=0;contador<quantidade;contador++)
{
printf("Digite o %dº número:\n",contador+1);
scanf("%d",&numero[contador]);

}

}

void numero127 ()

{

int contador=0;
for (contador=0;contador<quantidade;contador++){
if (numero[contador]==127){
    printf("O número 127 esta na posição %d.\n",contador+1);
}

}
}
void media()
{
int contador=0,quantidadepositivos;
float media=0, soma=0;

for (contador=0;contador<quantidade;contador++) {
    if (numero[contador]>0){
soma+=numero[contador];
quantidadepositivos++;
}
}
media=soma/quantidadepositivos;
printf("A média dos números digitados é %.2f.\n",media);

}


int main ()
{
setlocale(0,"Portuguese");
cadastro();
numero127();
media();
return 0;
}

#endif // ex3


