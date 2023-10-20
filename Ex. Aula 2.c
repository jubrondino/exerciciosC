#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

#define ex6

#ifdef ex1

/*1 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/

    int main(){
    setlocale(LC_ALL,"Portuguese");
    int hora_inicio,hora_final,minuto_inicio,minuto_final,segundo_inicio,segundo_final,total_inicial,total_final,total,duracao_hora,duracao_minuto,duracao_segundo,opcao;

    while(1){
    printf("\n\nDigite o horário do início da ligação:\n\n");
    printf("Horas:");
    scanf("%d",&hora_inicio);
    printf("Minutos:");
    scanf("%d",&minuto_inicio);
    printf("Segundos:");
    scanf("%d",&segundo_inicio);
    total_inicial=(hora_inicio*3600)+(minuto_inicio*60)+segundo_inicio;

    printf("\nDigite o horário do fim da ligação:\n\n");
    printf("Horas:");
    scanf("%d",&hora_final);
    printf("Minutos:");
    scanf("%d",&minuto_final);
    printf("Segundos:");
    scanf("%d",&segundo_final);

    total_final=(hora_final*3600)+(minuto_final*60)+segundo_final;
    total=total_final-total_inicial;
    duracao_hora=total/3600;
    duracao_minuto=(total%3600)/60;
    duracao_segundo=(total%3600)%60;



    printf("\nA ligação teve inicio em: %dh %dm %ds.\n",hora_inicio,minuto_inicio,segundo_inicio);
    printf("\nA ligação terminou em: %dh %dm %ds.\n",hora_final,minuto_final,segundo_final);
    printf("\nA ligação teve duração de: %dh %dm %ds.\n",duracao_hora,duracao_minuto,duracao_segundo);

    while(1){
    printf("\nO que deseja fazer agora?\n\n1-Calcular novamente\n2-Sair\n");
    printf("->");
    scanf("%d",&opcao);

    if (opcao==1){
        break;
    }
    else{
        exit(0);
    }
    }
    }
    return 0;

    }
#endif // ex1

#ifdef ex6

/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/

int main() {
    int palpites = 0, limiteinferior = 1, limitesuperior = 99;

    setlocale(LC_ALL, "Portuguese");

    printf("Vamos jogar um jogo? Você escolhe um número e eu vou tentar adivinhar que número você escolheu.\nEsse número deve estar entre 1 e 99.\nVamos lá!\n");
    sleep(3);
    printf("\nPense no número...\n");
    sleep(1);
    printf("...");
    sleep(1);
    printf("...");
    sleep(1);
    printf("...");
    sleep(1);

    srand(time(NULL));
    int numeroSorteado = 1 + rand() % 99;

    while (1) {
        printf("\nMeu palpite é: %d. É >, < ou =? \n", numeroSorteado);
        char opcao;
        scanf(" %c", &opcao);

        if (opcao == '>') {
            limiteinferior = numeroSorteado + 1;
        } else if (opcao == '<') {
            limitesuperior = numeroSorteado - 1;
        } else if (opcao == '=') {
            printf("Acertei em %d tentativas\n", palpites);
            break;
        } else {
            printf("Digite uma opção válida\n");
        }

        numeroSorteado = limiteinferior + rand() % (limitesuperior - limiteinferior + 1);
        palpites++;
    }

    return 0;
}


#endif // ex2

#ifdef ex2

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos jogar um jogo? Você escolhe um número e eu vou tentar adivinhar que número você escolheu.\nEsse número deve estar entre 1 e 99.\nVamos lá!\n");
    sleep(2);
        printf("\nPense no número...\n");
        sleep(1);
        printf("......");
        sleep(1);
        printf("...........");
        sleep(1);
        printf("..............");
        sleep(1);

    int limiteinferior = 1;
    int limitesuperior = 99;
    int palpites = 0;
while (1){
    while (1) {
        int meio = (limiteinferior + limitesuperior) / 2;
        printf("\nMeu palpite é: %d. É >, < ou =? \n", meio);
        char opcao;
        scanf(" %c", &opcao);

        if (opcao == '>') {
            limiteinferior = meio + 1;
        } else if (opcao == '<') {
            limitesuperior = meio - 1;
        } else if (opcao == '=') {
            printf("Acertei em %d tentativas\n", palpites);
            break;
        } else {
            printf("Digite uma opção válida\n");
        }

        palpites++;
    }

while(1){
int sair;
printf("\nDIGITE:\n1-SAIR\n2-JOGAR NOVAMENTE\n");
printf("->");
scanf("%d",&sair);
if(sair==1){
    exit(0);
}
else if(sair==2){
    printf("\nOba!Vamos começar!\n");
    break;
}
else{
    printf("\nDigite um valor válido.");
}
}
}
    return 0;
}

#endif // ex3

#ifdef ex3
/*3 - Reescreva o programa do exercicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos jogar um jogo? Você escolhe um número e eu vou tentar adivinhar que número você escolheu.\nEsse número deve estar entre 1 e 99.\nVamos lá!\n");
    sleep(2);
        printf("\nPense no número...\n");
        sleep(1);
        printf("\n......");
        sleep(1);
        printf("...........");
        sleep(1);
        printf("..............");
        sleep(1);

    int limiteinferior = 1;
    int limitesuperior = 99;
    int palpites = 0;
while (1){
    while (1) {
        int meio = (limiteinferior + limitesuperior) / 2;
        printf("\nMeu palpite é: %d. É >, < ou =? \n", meio);
        char opcao;
        scanf(" %c", &opcao);
        switch(opcao){
        case '>':
            limiteinferior = meio + 1;
            break;
        case '<' :
            limitesuperior = meio - 1;
            break;
        case '=' :
            printf("Acertei em %d tentativas\n", palpites);
            break;

        default:
            printf("Digite uma opção válida\n");
        }

        palpites++;
        if (opcao=='='){
        break;
}
    }

while(1){
int sair;
printf("\nDIGITE:\n1-SAIR\n2-JOGAR NOVAMENTE\n");
printf("->");
scanf("%d",&sair);
switch (sair){
case 1:
    exit(0);
case 2:
    printf("\nOba!Vamos começar!\n");
    printf("\nPense no número...\n");
    sleep(1);
    break;
default:
    printf("\nDigite um valor válido.\n");
}
if(sair==2){
break;}}
}
    return 0;
}
#endif // ex3

#ifdef ex4
/*4 - Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/
int main(){
setlocale(LC_ALL,"Portuguese");
float distancia,quantidade_litros,consumo;

printf("\nEsse programa tem como objetivo avaliar a performance do seu carro com base no consumo de combustível.\n");
while(1){
printf("\n\nDistância percorrida(Em km):");
scanf("%f",&distancia);
printf("\nQuantidade de litros consumido:");
scanf("%f",&quantidade_litros);
consumo=distancia/quantidade_litros;
printf("\nConsumo: %.2f km/l.\n",consumo);
if (consumo<8){
    printf("\nVenda o carro!\n");
}
else if(consumo>8 && consumo<14){
    printf("\nEconômico.\n");
}
else{
    printf("\nSuper econômico.\n");
}
while(1){
int opcao;
printf("\n\nDeseja efetuar novo cálculo?\n1-SIM\n2-NÃO\n");
printf("->");
scanf("%d",&opcao);
if(opcao==1){
    break;
}
else if(opcao==2){
    exit(0);
}
else{
    printf("\nOpção inválida.\n");
}
}
}
return 0;
}



#endif // ex5

#ifdef ex5
/*5 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/

int main(){
int num,soma=0,contador=0;
setlocale(LC_ALL,"Portuguese");
printf("Digite números inteiros:\n");
  while (1){
    printf("\n%dº número:",contador+1);
    scanf("%d",&num);
    contador++;
    if (num>0){
    soma+=num;}
    else {
    printf("\nA soma dos números digitados é %d.\n",soma);
    while(1){
    int opcao;
    printf("\nDigite:\n1-Reiniciar\n2-Sair\n");
    printf("->");
    scanf("%d",&opcao);
    if (opcao==1){
    soma=0;
    contador=0;
    break;}
    else if(opcao==2){
    printf("\nAté a próxima.\n");
    exit(0);
    }
    else{
    printf("/nOpção inválida. Tente novamente./n");
}
}


}
}
return 0;

}

#endif // ex5
