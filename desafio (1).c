/*PROGRAMA DESAFIO 1

1 � Pesquise as fun��es de biblioteca abaixo que manipulam arquivos.

fopen();

fclose();

fwrite(); cuidado com esta fun��o

fread(); cuidado com esta fun��o

exit(0);

2 - Escreva um programa que tem 3 vetores unidimensionais medico[20] e 3 vetores unidimensionais data_consulta[11] declarados como vari�veis globais.

Na fun��o main() fa�a um menu com as seguintes op��es:

1 � Entrada de dados.

2 � Lista todos os dados na tela.

3 � Pesquisa um m�dico pelo nome completo e mostra todo os dados na tela

4 � Pesquisa pela data de consulta e mostra todos na tela.

5 � Altera dados. Pesquisa pelo nome completo do m�dico.

6 � Exclui dados. Pesquisa pelo nome completo do m�dico.

7 � Sa�da

Os 6 vetores devem ser escritos e lidos em um arquivo.

Cada uma das op��es do menu � uma fun��o no programa.

N�o pode usar nenhuma fun��o de biblioteca a n�o ser as 6 da apostila e as fun��es de manipula��o de arquivos pesquisadas.

Os vetores dos m�dicos s�o as chaves prim�rias do banco de dados. Portanto n�o pode ter 2 m�dicos com nomes iguais.*/


#include<stdio.h>
#include<stdlib.h>

char medico1[20],medico2[20],medico3[20],consulta1[11],consulta2[11],consulta3[11];
int opcao;


void linha(){
printf("_______________________________________________________________________________");}

void cabecalho(){
linha();
printf("\n\n                               HOSPITAL SANTA ADA\n\n");
linha();}

void entrada_de_dados(){
linha();
printf("\n\n                               CADASTRO DE DADOS\n\n");

printf("\n");

    linha();
    printf("\n\nMedico(nome completo): ");
    gets(medico1);
    printf("\nData da consulta: ");
    gets(consulta1);
    linha();
    printf("\n\nMedico(nome completo):");
    gets(medico2);
    printf("\nData da consulta: ");
    gets(consulta2);
    linha();
    printf("\n\nMedico(nome completo):");
    gets(medico3);
    printf("\nData da consulta: ");
    gets(consulta3);
    }

void listar_dados() {
    linha();
    printf("\n\n                        LISTA DE MEDICOS/CONSULTAS ");
    printf("\n\n       MEDICOS                            DATA DA CONSULTA\n");
    printf("\n       %-35s %-25s", medico1, consulta1);
    printf("\n       %-35s %-25s", medico2, consulta2);
    printf("\n       %-35s %-25s", medico3, consulta3);
}

void pesquisa_medico(){
char nome[20];

printf("\n         PESQUISA MEDICO");
printf("\nNome completo: ");
gets(nome);
if (nome==medico1) {
        printf("Medico:%sData da consulta: %s\n", medico1, consulta1);}
else if (nome == medico2) {
    printf("Medico: %sData da consulta: %s\n", medico2, consulta2);}
else if (nome==medico3) {
    printf("Medico:%sData da consulta: %s\n", medico3, consulta3);}
else {
    printf("Medico nao encontrado.\n");}}

int main(){

while(1){
printf("\n");
cabecalho();
printf("\n\n                                    MENU        ");
printf("\n\n1- Entrada de dados\n");
printf("2- Lista todos os dados na tela\n");
printf("3- Pesquisa um medico pelo nome completo e mostra todos os dados na tela\n");
printf("4- Pesquisa pela data de consulta e mostra todos na tela\n");
printf("5- Altera dados. Pesquisa pelo nome completo do medico\n");
printf("6- Exclui dados. Pesquisa pelo nome completo do medico\n");
printf("7- Saida\n\n");
linha();
printf("\n\nOpcao: ");
scanf("%d",&opcao);
getchar();

switch(opcao){

case 1:
    entrada_de_dados();
    break;

case 2:
    listar_dados();
    break;

case 3:
    pesquisa_medico();
    break;
case 4:
    break;
case 5:
    break;
case 6:
    break;
case 7:
    printf("\n\nAte mais!\n");
    exit(0);
    break;

default:
    printf("Opcao invalida. Tente novamente.\n");
    break;
}}

return 0;}

