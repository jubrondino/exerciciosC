#include<stdio.h>
#include<locale.h>
#include<math.h>



#define ex2
    /*Crie uma função para garantir o recebimento da quantidade de termos definida pelo usuário.
    Crie uma função para gerar cada uma das sequencias abaixo:*/

int qtdtermos()
{
    int termos;
   do{ printf("Digite a quantidade de termos que deseja exibir:\n");
    scanf("%d",&termos);
   }
    while(termos<=0);

    return termos;
}



#ifdef ex1a

int mult3(int termos)
{
    int quantidade = termos;
    int contador, numero = 0, soma = 0;

    printf("Os %d primeiros múltiplos de 3 são:\n", quantidade);
    for (contador = 0; contador < quantidade; contador++) {
        numero += 3;
        soma += numero;

        if (contador < quantidade - 1)
            printf("%d,", numero);
        else
            printf("%d.\n", numero);
    }

    return soma;
}
int main()
{
    setlocale(0, "Portuguese");

    int quantidade, multiplos3;
    float media = 0;

    quantidade = qtdtermos();
    multiplos3 = mult3(quantidade);
    media = (float) multiplos3 / quantidade;

    printf("A média dos %d primeiros múltiplos de 3 é: %.2f\n", quantidade, media);

    return 0;
}


#endif // ex1a

#ifdef ex1b/*  2/5, 4/10, 6/15, 8/20, 10/25, 12/30, ...Exiba o produto dos números gerados na
sequencia considerando a quantidade de números solicitada pelo usuário no interior desta função.*/


float multiplos(int termos)
{int quantidade,contador,numerador=0,denominador=0;
float produton=1,produtod=1;
quantidade=termos;
printf("Os %d primeiros termos são:\n",quantidade);
for (contador=0;contador<quantidade;contador++)
{
numerador+=2;
denominador+=5;
produton*=numerador;
produtod*=denominador;
if(contador<quantidade-1){
printf("%d/%d, ",numerador,denominador);}
else{
printf("%d/%d. ",numerador,denominador);}
}

printf("\nO produto dos valores acima escritos é: %.0f/%.0f.\n",produton,produtod);

return(produton/produtod);
}
main()
{ setlocale(0,"Portuguese");
int quantidade;
float resultado;
quantidade=qtdtermos();
resultado=multiplos(quantidade);
}

#endif // ex1b

#ifdef ex1c /*  4/8, 1, 36/24, 2, 100/40, 144/48, ...Exiba a somatória no interior da função main
 de todos os termos considerando a quantidade determinada pelo usuário.*/

float soma(int termos)
{
int quantidade,contador;
float numerador=2,denominador=0,somad=0,soman=0,auxiliar=0;
quantidade=termos;
printf("Os %d primeiros termos são:\n",quantidade);

for (contador=0;contador<quantidade;contador++)
    {
    auxiliar+=2;
    numerador=pow(auxiliar,2);
    denominador+=8;
    soman+=numerador;
    somad+=denominador;
if (contador<quantidade-1)
{
printf("%.0f/%.0f, ",numerador,denominador);
}

else {
    printf("%.0f/%.0f. ",numerador,denominador);
}
}

printf("\nA soma dos termos é %.0f/%.0f.",soman,somad);

return (soman/somad);
}

main()
{
setlocale(0,"Portuguese");
int quantidade;
float adicao;
quantidade=qtdtermos();
adicao=soma(quantidade);
}

#endif // ex1c

#ifdef ex2 /*Crie uma função para garantir que a quantidade de pessoas deve ser maior que zero e
 deve ser representada pela variável A variável Peso armazena cada um do N pesos digitados.
Crie a função MédiaPesos para calcular a média dos pesos e exibir no interior dessa função.
Crie a função MaiorPeso e exiba no interior da função main o maior peso encontrado.*/

float peso[100];
    int qtdpessoas() {
    int A;

      do
       {
         printf("Digite a quantidade de  pessoas que deseja inserir o peso:\n");
         scanf("%d",&A);
       }
    while (A<=0);
    return A;
    }



    float pesosp (int A) {
    int contador;
    int quantidade=A;
    float somap=0;

    for (contador=1;contador<=quantidade;contador++) {
    printf("Digite o %d° peso:",contador);
    scanf("%f",&peso[contador]);
    somap+=peso[contador];
    }
   return somap;
    }

    float mediap (int A,float somap) {
    float media=somap/A;
    printf("A média dos  pesos é %.2f.",media);
return media;
}

float maiorp(int A) {
float maior=peso[1];
int contador;

for (contador=1;contador<=A;contador++){
    if (peso[contador]>maior){
    maior=peso[contador];
}
}
printf("\nO maior peso encontrado é: %.2f.",maior);
return maior;
}


    int main() {
    setlocale(0,"Portuguese");

    int quantidade=qtdpessoas();
    float somap=pesosp(quantidade);
    mediap(quantidade,somap);
    maiorp(quantidade);
    return 0;
    }

#endif // ex1
