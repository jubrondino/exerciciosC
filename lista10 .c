#import <stdio.h>
#import <stdlib.h>


#define ex3

#ifdef ex1
/*1 - Escreva um programa para criar e abrir um arquivo texto de nome "arq.txt".
    Receba via teclado diversos caracteres (um por vezes) e escreva-os
    nesse arquivo. O caracter '0' finaliza a entrada de dados. Abra o arquivo
    "arq.txt", leia e imprima na tela todos os caracteres armazenados no
    arquivo (um por vezes).*/

  int main(){
    FILE *arquivo = fopen("arq.txt", "w");
    char caractere;

        if (arquivo == NULL) {
            printf("Arquivo de dados não encontrado. Será criado um novo.\n");
            return 1;}

        printf("\nDigite apenas 1 caractere por linha. Quando acabar de inserir digitar '0'.\n");
        do{
        scanf("%c",&caractere);
        fputc(caractere,arquivo);} while(caractere!='0');
        fclose(arquivo);

        arquivo = fopen("arq.txt", "r");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo para escrita.\n");
            return 1;}

        printf("\n\nSegue abaixo o conteudo do arquivo:\n");

        while((caractere = fgetc(arquivo))!= EOF){
            printf("%c",caractere);}

        fclose(arquivo);
        return 0;
  }


    //---------------------------------------------------------------------


#endif // ex1

#ifdef ex2
/*
2 - Escreva um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversario (dia e mes) em uma estrutura de
    dados. Utilize um vetor de estrutura de 4 elementos como variavel LOCAL na
    funcao main(). Utilize ponteiros para passar o vetor de estrutura para
    as funcoes. Sempre que o programa for encerrado, os contatos devem ser
    escritos no arquivo e quando o programa iniciar os contatos devem ser lidos
    do arquivo.
    O programa deve ter as seguintes opcoes:(cada opcao do menu e' um funcao)
    1 - inserir contato
    2 - listar todos os contatos
    3 - pesquisar um contato pelo nome
    4 - listar os contatos cujo nome inicia com uma letra digitada
    5 - imprimir os aniversariantes do mês.
    6 - altera contato
    7 - exclui contato
    8 - saida
*/
struct dados {
    char nome[20];
    char telefone[14];
    char aniversario[6];
};

            void editar_arquivo(struct dados *individual) {
            FILE *f = fopen("agenda.txt", "w");

            if (f == NULL) {
            printf("Erro ao abrir arquivo de contatos.\n");
            exit(0);}

            fwrite(individual, sizeof(struct dados), 4, f);
            fclose(f);}
//------------------------------------------------------------------

            void ler_arquivo(struct dados *individual) {
            FILE *f = fopen("agenda.txt", "r");

            if (f == NULL) {

            for (int i = 0; i < 4; i++) {
            individual[i].nome[0] = '\0';
            individual[i].telefone[0] = '\0';
            individual[i].aniversario[0] = '\0';}

            editar_arquivo(individual);
            return;}

            fread(individual, sizeof(struct dados), 4, f);

            fclose(f);}

//------------------------------------------------------------------

            void inserir_contato(struct dados *contato) {
            printf("\nNome: ");
            fgets(contato->nome, 20, stdin);
            printf("\nTelefone(com DDD): ");
            fgets(contato->telefone, 14, stdin);
            printf("\nAniversario (dia/mes): ");
            fgets(contato->aniversario, 6, stdin);
            while (getchar() != '\n');}
//------------------------------------------------------------------

            void listar_contato(struct dados *individual) {
            printf("\n      Nome: %s", individual->nome);
            printf("\n      Telefone(DDD): %s", individual->telefone);
            printf("\n      Aniversario: %s", individual->aniversario);}
//------------------------------------------------------------------

            int compara_nomes(const char *nome1, const char *nome2) {
            int contador;
            for (contador = 0; nome1[contador] != '\0' && nome2[contador] != '\0' && nome1[contador] != '\n' && nome2[contador] != '\n'; contador++) {
            if (nome1[contador] != nome2[contador]) {
            return 0;}}
            return 1;}
//------------------------------------------------------------------

            int pesquisar_contato(struct dados *individual, char *nome) {
            for (int contador = 0; contador < 4; contador++) {
            if (compara_nomes(individual[contador].nome, nome)) {
            return contador;}}
            return -1;}
//------------------------------------------------------------------

            void alterar_contato(struct dados *individual, char *nome) {
            int resultado = pesquisar_contato(individual, nome);

            if (resultado != -1) {
            while (1) {
            printf("Esses sao os dados que deseja alterar?\n");
            listar_contato(&individual[resultado]);
            printf("\n\n1-Sim\n2-Nao\n");
            int opcao;
            scanf("%d", &opcao);

            if (opcao == 1) {
            getchar();
            inserir_contato(&individual[resultado]);
            break;}
            else if (opcao == 2) {
            printf("\nOperacao cancelada.");
            break;}
            else {printf("\nOpcao invalida.");}}}
            else {printf("\nRegistro nao encontrado.\n");}}
//------------------------------------------------------------------

            void apagar_campo(char *campo) {
            for (int contador = 0; campo[contador] != '\0'; contador++) {
            campo[contador] = '\0';}
            campo[1] = '*';}
//------------------------------------------------------------------

            void excluir_contato(struct dados *individual, char *nome) {
            int resultado = pesquisar_contato(individual, nome);
            printf("\n");
            if (resultado != -1) {
            apagar_campo(individual[resultado].nome);
            apagar_campo(individual[resultado].telefone);
            apagar_campo(individual[resultado].aniversario);

            printf("\nRegistro excluido com sucesso.\n");}
            else {printf("\nRegistro nao encontrado.\n");}}
//------------------------------------------------------------------

            void pesquisar_letra(struct dados *individual, char *letra) {
            printf("\nRegistros cujos nomes comecam com '%c':\n", letra);
            for (int contador = 0; contador < 4; contador++) {
            char primeira_letra = tolower(individual[contador].nome[0]);
            if (primeira_letra == tolower(letra)) {
            printf("\n\n---------------------------------------------");
            listar_contato(&individual[contador]);}}}

//------------------------------------------------------------------
            void birth_mes(struct dados *individual, const char *mes) {
            printf("\nAniversariantes do mes %s: \n", mes);

            for (int contador = 0; contador < 4; contador++) {
            int mes_contato = (individual[contador].aniversario[3] - '0') * 10 + (individual[contador].aniversario[4] - '0');

            int mes_digitado = (mes[0] - '0') * 10 + (mes[1] - '0');

            if (mes_contato == mes_digitado) {
            printf("\n\n---------------------------------------------");
            listar_contato(&individual[contador]);}}}

//------------------------------------------------------------------


int main() {
    struct dados individual[4];
    char nome[20];
    char letra,mes_procurado[2];
    int opcao, contador;

    ler_arquivo(individual);

    do {
        printf("\n\n=============================================");
        printf("\n                     MENU                      ");
        printf("\n=============================================");
        printf("\n\n1 - Inserir contato\n2 - Listar todos os contatos\n3 - Pesquisar um contato pelo nome\n4 - Listar os contatos cujo nome inicia com uma letra digitada\n5 - Imprimir os aniversariantes do mes.\n6 - Altera contato\n7 - Exclui contato\n8 - Saida");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("\n=============================================");
                printf("\n               INSERIR DADOS                  ");
                printf("\n=============================================");
                for (contador = 0; contador < 4; contador++) {
                    printf("\n\nRegistro No %d\n", contador + 1);
                    inserir_contato(&individual[contador]);}
                break;

            case 2:
                printf("\n=============================================");
                printf("\n             LISTAR CONTATOS                   ");
                printf("\n=============================================");
                for (contador = 0; contador < 4; contador++) {
                    printf("\n\nRegistro No %d\n", contador + 1);
                    listar_contato(&individual[contador]);}
                break;

            case 3:
                printf("\n=============================================");
                printf("\n            PESQUISAR CONTATO                 ");
                printf("\n=============================================");
                printf("\nDigite o nome do registro que deseja pesquisar: ");
                gets(nome);
                int resultado = pesquisar_contato(individual, nome);
                if (resultado != -1) {
                    listar_contato(&individual[resultado]);}
                else {
                    printf("\nRegistro nao encontrado.\n");}
                break;

            case 4:
                printf("\n=============================================");
                printf("\n  PESQUISAR CONTATO POR LETRA INICIAL         ");
                printf("\n=============================================");
                printf("\nDigite a letra: ");
                scanf(" %c", &letra);
                pesquisar_letra(individual,letra);
                break;

            case 5:
                printf("\n=============================================");
                printf("\n       ANIVERSARIANTES DO MES                ");
                printf("\n=============================================");
                printf("\nDigite o mes (Ex: 05): ");
                scanf(" %s", &mes_procurado);
                birth_mes(individual,mes_procurado);
                break;

            case 6:
                printf("\n=============================================");
                printf("\n            ALTERAR CONTATO                   ");
                printf("\n=============================================");
                getchar();
                printf("\nDigite o nome do registro que deseja alterar:\nPs: para editar registros em branco digite '*' ");
                gets(nome);
                alterar_contato(individual, nome);
                break;

            case 7:
                printf("\n=============================================");
                printf("\n            EXCLUIR CONTATO                   ");
                printf("\n=============================================");
                printf("\nDigite o nome do registro que deseja excluir: ");
                gets(nome);
                excluir_contato(individual, nome);
                break;

            case 8:
                editar_arquivo(individual);
                printf("\nAte mais.\n");
                exit(1);

            default:
                printf("\nOpcao invalida. Tente novamente.");}}
                while (opcao != 8);

    return 0;
}

#endif // ex2

#ifdef ex3
/*3 - Escreva um programa para o controle de mercadorias em uma dispensa
    domestica. Para cada produto sera' armazenado um codigo numerico, nome
    do produto e quantidade atual numa estrutura de dados. A unica estrutura
    de dados deve ser declarada como variavel LOCAL na funcao main(). Escreva
    os itens das mercadorias direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui produtos
    2 - listar todos os produtos
    3 - pesquisar uma mercadoria pela descrição
    4 - listar os produtos não disponíveis.
    5 - alterar a quantidade atual
    6 - altera produtos
    7 - exclui produtos
    8 - saida*/

struct estoque{
  int id;
  char nome[21];
  int quantidade;};
//-----------------------------------------------------------------------------------------


                void salvar(struct estoque *produto) {
                int i;
                for (i = 0; ler_produto(produto, i) > 0; i++) {
                if (produto->id == produto[i].id) {
                printf("\nErro: ID do produto ja existe.\n");
                return;}}

                FILE *f = fopen("produtos.txt", "a");

                if (f == NULL) {
                printf("Erro ao abrir arquivo de produtos.\n");
                exit(0);}

                fwrite(produto, sizeof(struct estoque), 1, f);
                fclose(f);}

//-----------------------------------------------------------------------------------------

            void alterar_arquivo(struct estoque *produto, int i) {
            FILE *f = fopen("produtos.txt", "r+");

            if (f == NULL) {
            printf("\nNao ha produtos cadastrados.\n");

            return;}

            fseek(f, i * sizeof(struct estoque), 0);
            fwrite(produto, sizeof(struct estoque), 1, f);
            fclose(f);}
//-----------------------------------------------------------------------------------------

        int ler_produto(struct estoque *produto, int i) {
        int qtd_bytes = 0;
        FILE *f = fopen("produtos.txt", "r");

        if (f == NULL) {
        printf("\n\aNao ha produtos cadastrados.\n");

        return 0;}

          fseek(f, i * sizeof(struct estoque), 0);
          qtd_bytes = fread(produto, sizeof(struct estoque), 1, f);
          fclose(f);

        return qtd_bytes;}
//-----------------------------------------------------------------------------------------

            void incluir_produtos(struct estoque *produto) {
            printf("\n\n=============================================");
            printf("\n                     INCLUIR PRODUTO                      ");
            printf("\n=============================================");
            int opcao = 0;
            do {
            printf("\nCodigo/id: ");
            scanf("%d", &produto->id);
            printf("\nNome: ");
            while (getchar() != '\n');
            fgets(produto->nome, sizeof(produto->nome), stdin);
            printf("\nQuantidade: ");
            scanf("%d", &produto->quantidade);

            salvar(produto);
            printf("\nProduto cadastrado com sucesso.");
            do {
            printf("\nO que deseja fazer?\n1. Cadastrar outro produto\n2. Retornar ao menu\n->");
            scanf("%d", &opcao);
            if (opcao == 1 || opcao == 2) {
                break;
            } else {
                printf("\nOpcao invalida. Tente novamente.");
            }
            } while (1);
            if (opcao == 2) {
            break;
            }
            } while (1);
            }

//-----------------------------------------------------------------------------------------
        void unidade(struct estoque *produto) {
        printf("\nCodigo: %.4d\n", produto->id);
        printf("Descricao: %s\n", produto->nome);
        printf("Quantidade: %.2d\n", produto->quantidade);
        printf("\n-----------------------------------------------------\n");}
//-----------------------------------------------------------------------------------------
    void imprimir_produtos(struct estoque *produto) {
    int contador = 0;
    printf("\n\n=============================================");
    printf("\n                     LISTAGEM DE PRODUTOS                     ");
    printf("\n=============================================");
    for (int i = 0; ler_produto(produto, i) != 0; i++) {
    unidade(produto);
    contador++;}}

//-----------------------------------------------------------------------------------------

    void pesquisar_mercadoria(){
        printf("\n\n=============================================");
        printf("\n                     PESQUISAR MERCADORIA                      ");
        printf("\n=============================================");}
//-----------------------------------------------------------------------------------------

    void produtos_indisponiveis(){
        printf("\n\n=============================================");
        printf("\n                     PRODUTOS INDISPONIVEIS                      ");
        printf("\n=============================================");}

//-----------------------------------------------------------------------------------------

    void alterar_quantidade(){
        printf("\n\n=============================================");
        printf("\n                     ALTERAR QUANTIDADE                      ");
        printf("\n=============================================");}
//-----------------------------------------------------------------------------------------

    void alterar_produto(){
        printf("\n\n=============================================");
        printf("\n                     ALTERAR PRODUTO                      ");
        printf("\n=============================================");}
//-----------------------------------------------------------------------------------------

    void excluir_produto(){
        printf("\n\n=============================================");
        printf("\n                     EXCLUIR PRODUTO                      ");
        printf("\n=============================================");}
//-----------------------------------------------------------------------------------------




int main(){
struct estoque *produto;
int opcao;

while(1){
        printf("\n\n=============================================");
        printf("\n                     MENU                      ");
        printf("\n=============================================");
        printf("\n1 - Incluir produtos\n2 - Listar todos os produtos\n3 - Pesquisar uma mercadoria pela descricao\n4 - Listar os produtos indisponiveis\n5 - Alterar a quantidade atual\n6 - Altera produtos\n7 - Excluir produtos\n8 - Sair\n->");
        scanf("%d",&opcao);
        printf("\n-----------------------------------------------------\n");

    switch(opcao){

case 1:
        incluir_produtos(&produto);

        break;

case 2:
        imprimir_produtos(produto);
        break;

case 3:
        pesquisar_mercadoria(&produto);

        break;

case 4:
        produtos_indisponiveis(&produto);
        break;

case 5:
        alterar_quantidade(&produto);
        break;

case 6:
        alterar_produto(&produto);

        break;

case 7:
        excluir_produto(&produto);
        break;

case 8:

        printf("\nAte mais.");
        exit(0);
default:
    printf("\nOpcao invalida. Tente novamente.");

}}}


#endif // ex3


#ifdef ex4
/*4 - Escreva um programa para controle de um cadastro de clientes. Para cada
    registro sera' armazenado nome, email e celular numa estrutura de dados.
    A unica estrutura de dados e' uma variavel LOCAL na funcao main().
    Escreva os registros direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros para
    passar parametros para as funcoes.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui registros
    2 - listar todos os registros
    3 - pesquisar registro pelo nome
    4 - altera registro
    5 - exclui registro
    6 - saida*/

    struct dados{
    char nome[20];
    char telefone[14];
    char aniversario[5];};


    int main(){
    int opcao;

    printf("\n=============================================");
    printf("\n                     MENU                                              ");
    printf("\n=============================================");
    printf("\n\n1 - incluir registros\n\2 - Listar todos os registros\n3 - Pesquisar registro pelo nome\n4 - Altera registro\n5 - Exclui registro\n6 - Saida");
    printf("\nDigite a opção desejada: ");
    scanf("%d",&opcao);

    switch (opcao){

case 1:

case 2:

case 3:

case 4:

case 5:

case 6:
    printf("\nAte mais.");
    exit(1);

default:
    printf("\nOpcao invalida. Tente novamente.");



    }
#endif // ex4
