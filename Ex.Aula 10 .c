#import <stdio.h>
#import <stdlib.h>


#define ex4

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
            if (tolower(nome1[contador]) != tolower(nome2[contador])) {
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
                printf("\n\n\aNao ha produtos cadastrados.");
                return;}

                fseek(f, i * sizeof(struct estoque), 0);
                fwrite(produto, sizeof(struct estoque), 1, f);
                fclose(f);}
//-----------------------------------------------------------------------------------------

                int ler_produto(struct estoque *produto, int i) {
                int qtd_bytes=0;
                FILE *f = fopen("produtos.txt", "r");

                if (f == NULL) {
                return 0;}

                fseek(f, i * sizeof(struct estoque), 0);
                qtd_bytes = fread(produto, sizeof(struct estoque), 1, f);
                fclose(f);

                return qtd_bytes;}

//-----------------------------------------------------------------------------------------

                void adicionar(struct estoque *produto){
                printf("\nCodigo/id: ");
                scanf("%d", &produto->id);
                printf("\nNome: ");
                while (getchar() != '\n');
                gets(produto->nome);
                printf("\nQuantidade: ");
                scanf("%d", &produto->quantidade);
                salvar(produto);}
//-----------------------------------------------------------------------------------------

                void incluir_produtos(struct estoque *produto) {
                printf("\n\n=============================================");
                printf("\n                     INCLUIR PRODUTO                      ");
                printf("\n=============================================");
                int opcao = 0;
                do {
                adicionar(produto);
                printf("\nProduto cadastrado com sucesso.");
                do {
                printf("\nO que deseja fazer?\n1. Cadastrar outro produto\n2. Retornar ao menu\n->");
                scanf("%d", &opcao);
                if (opcao == 1 || opcao == 2) {break;}
                else {printf("\nOpcao invalida. Tente novamente.");}}
                while (1);
                if (opcao == 2) {break;}}
                while (1);}

//-----------------------------------------------------------------------------------------
                void exibir_unitario(struct estoque *produto) {
                printf("\nCodigo: %.4d\n", produto->id);
                printf("\nDescricao: %s\n", produto->nome);
                printf("\nQuantidade: %.2d\n", produto->quantidade);
                printf("\n-----------------------------------------------------\n");}

//-----------------------------------------------------------------------------------------
                void imprimir_produtos(struct estoque *produto) {
                printf("\n\n=============================================");
                printf("\n                     LISTAGEM DE PRODUTOS                     ");
                printf("\n=============================================");
                for (int i = 0; (ler_produto(produto, i)) != 0; i++) {
                if (produto->nome[0] == '*') {
                continue;}
                exibir_unitario(produto);}}

//------------------------------------------------------------------


                int comparar(const char *nome1, const char *nome2) {
                int contador;
                for (contador = 0; nome1[contador] != '\0' && nome2[contador] != '\0' && nome1[contador] != '\n' && nome2[contador] != '\n'; contador++) {
                if (tolower(nome1[contador]) != tolower(nome2[contador])) {
                return 0;}}
                return 1;}
//------------------------------------------------------------------

                int pesquisa(char *nome, struct estoque*produto) {
                int qtd_bytes = -1;
                FILE *f = fopen("produtos.txt", "r");
                if (f == NULL) { return -1;}
                for (int i = 0; qtd_bytes != 0; i++) {
                fseek(f, i * sizeof(struct estoque), 0);
                qtd_bytes = fread(produto, sizeof(struct estoque), 1, f);
                if (comparar(nome, produto->nome)) {
                return i;}}
                return -1;}

//------------------------------------------------------------------


                void pesquisar_mercadoria(struct estoque *produto) {
                char mercadoria[20];
                printf("\n\n=============================================");
                printf("\n                     PESQUISAR MERCADORIA                      ");
                printf("\n=============================================");
                printf("\nDigite o nome da mercadoria que deseja procurar: ");
                scanf("%19s", mercadoria);
                getchar();
                int resultado = pesquisa(mercadoria, produto);

                if (resultado == -1) {
                printf("Na ha nenhum cadastro com esse nome.");
                return;}

                if (ler_produto(mercadoria, resultado) != 0) {
                exibir_unitario(mercadoria);}
                else {printf("\nErro ao ler o produto do arquivo.\n");}}


//-----------------------------------------------------------------------------------------

                void produtos_indisponiveis(struct estoque *produto){
                int qtd=0;
                printf("\n\n=============================================");
                printf("\n                     PRODUTOS INDISPONIVEIS                      ");
                printf("\n=============================================");

                for (int c = 0; (ler_produto(produto, c)) != 0; c++) {
                if (produto->quantidade == 0) {
                exibir_unitario(produto);
                qtd++;}}
                if(qtd==0){printf("\n\nNao ha produtos indisponiveis\n");}}

//-----------------------------------------------------------------------------------------


                void alterar_quantidade(struct estoque *produto){
                char mercadoria[20];
                printf("\n\n=============================================");
                printf("\n                     ALTERAR QUANTIDADE                      ");
                printf("\n=============================================");
                printf("\nDigite o nome da mercadoria que deseja alterar a quantidade: ");
                scanf("%19s", mercadoria);
                getchar();
                int resultado = pesquisa(mercadoria, produto);
                if (resultado == -1) {
                printf("\nProduto nao cadastrado.\n");
                return;}
                printf("\nQuantidade atual no estoque: %d",produto->quantidade);
                printf("\n\nNova quantidade: ");
                scanf("%d", &produto->quantidade);
                alterar_arquivo(produto, resultado);
                printf("\nQuantidade atualizada para: %d",produto->quantidade);
                printf("\n\nAlteracao realizada com sucesso.");}

//-----------------------------------------------------------------------------------------

                void alterar_produto(struct estoque *produto){
                printf("\n\n=============================================");
                printf("\n                     ALTERAR PRODUTO                      ");
                printf("\n=============================================");
                char mercadoria[20];
                printf("\nDigite o nome da mercadoria que deseja alterar: ");
                scanf("%19s", mercadoria);
                getchar();
                int resultado = pesquisa(mercadoria, produto);
                if (resultado == -1) {
                printf("\nProduto nao cadastrado.\n");
                return;}
                printf("\n\nMercadoria a ser alterada:\n\n");
                exibir_unitario(produto);
                printf("\nCodigo/id: ");
                scanf("%d", &produto->id);
                printf("\nNome: ");
                while (getchar() != '\n');
                gets(produto->nome);
                printf("\nQuantidade: ");
                scanf("%d", &produto->quantidade);
                alterar_arquivo(produto, resultado);
                printf("\n\nAlteracao realizada com sucesso.");}
//-----------------------------------------------------------------------------------------

                void excluir_produto(struct estoque *produto){
                printf("\n\n=============================================");
                printf("\n                     EXCLUIR PRODUTO                      ");
                printf("\n=============================================");
                char mercadoria[20];
                printf("\nDigite o nome da mercadoria que deseja alterar: ");
                scanf("%19s", mercadoria);
                getchar();
                int resultado = pesquisa(mercadoria, produto);
                if (resultado == -1) {
                printf("\nProduto nao cadastrado.\n");
                return;}
                printf("\n\nMercadoria a ser excluido:\n\n");
                exibir_unitario(produto);
                for (int c = 0; c < sizeof(produto->nome); c++) {produto->nome[c] = '*';}
                produto->quantidade = -1;
                produto->id = -1;
                alterar_arquivo(produto, resultado);
                printf("\n\nExcluido com sucesso.");}


//-----------------------------------------------------------------------------------------


int main(){
struct estoque produto;
int opcao;

while(1){
        printf("\n\n=============================================");
        printf("\n                     MENU                      ");
        printf("\n=============================================");
        printf("\n1 - Incluir produtos\n2 - Listar todos os produtos\n3 - Pesquisar uma mercadoria pela descricao\n4 - Listar os produtos indisponiveis\n5 - Alterar a quantidade atual\n6 - Altera produtos\n7 - Excluir produtos\n8 - Sair\n->");
        scanf("%d",&opcao);

    switch(opcao){

case 1:

        incluir_produtos(&produto);

        break;

case 2:
        imprimir_produtos(&produto);
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

    struct agenda{
    char nome[20];
    char celular[14];
    char email[20];};


                void salvar(struct agenda *dados) {

                FILE *f = fopen("agenda.txt", "a");

                if (f == NULL) {
                printf("Erro ao abrir agenda.\n");
                exit(0);}

                fwrite(dados, sizeof(struct agenda), 1, f);
                fclose(f);}

//-----------------------------------------------------------------------------------------

                void alterar_agenda(struct agenda *dados, int i) {
                FILE *f = fopen("agenda.txt", "r+");

                if (f == NULL) {
                printf("\n\n\aNao ha contatos cadastrados.");
                return;}

                fseek(f, i * sizeof(struct agenda), 0);
                fwrite(dados, sizeof(struct agenda), 1, f);
                fclose(f);}
//-----------------------------------------------------------------------------------------

                int ler_registro(struct agenda *dados, int i) {
                int qtd_bytes=0;
                FILE *f = fopen("agenda.txt", "r");

                if (f == NULL) {
                return 0;}

                fseek(f, i * sizeof(struct agenda), 0);
                qtd_bytes = fread(dados, sizeof(struct agenda), 1, f);
                fclose(f);

                return qtd_bytes;}

//-----------------------------------------------------------------------------------------
                void exibir_contato(struct agenda *dados) {
                printf("\nNome: %s\n", dados->nome);
                printf("\nTelefone: %s\n", dados->celular);
                printf("\nEmail: %s\n", dados->email);
                printf("\n-----------------------------------------------------\n");}

//-----------------------------------------------------------------------------------------

                void incluir_registros(struct agenda *dados){
                printf("\n\n=============================================");
                printf("\n                     ADICIONAR CONTATOS                      ");
                printf("\n=============================================");
                int opcao = 0;
                do {
                printf("\nNome: ");
                gets(dados->nome);
                printf("\nTelefone: ");
                gets(dados->celular);
                printf("\nEmail: ");
                gets(dados->email);
                salvar(dados);
                printf("\nContato cadastrado com sucesso.");
                do {
                printf("\nO que deseja fazer?\n1. Cadastrar outro contato\n2. Retornar ao menu\n->");
                scanf("%d", &opcao);
                getchar();
                if (opcao == 1 || opcao == 2) {break;}
                else {printf("\nOpcao invalida. Tente novamente.");}}
                while (1);
                if (opcao == 2) {break;}}
                while (1);}

//-----------------------------------------------------------------------------------------

                void imprimir_registros(struct agenda *dados){
                printf("\n\n=============================================");
                printf("\n                     AGENDA DE CONTATOS                     ");
                printf("\n=============================================");
                for (int c = 0; (ler_registro(dados, c)) != 0; c++) {
                if (dados->nome[0] == '*') {
                continue;}
                exibir_contato(dados);}}

//-----------------------------------------------------------------------------------------
                int comparar(const char *nome1, const char *nome2) {
                int contador;
                for (contador = 0; nome1[contador] != '\0' && nome2[contador] != '\0' && nome1[contador] != '\n' && nome2[contador] != '\n'; contador++) {
                if (tolower(nome1[contador]) != tolower(nome2[contador])) {
                return 0;}}
                return 1;}
//-----------------------------------------------------------------------------------------

                int pesquisa(char *nome, struct agenda *dados) {
                int qtd_bytes = -1;
                FILE *f = fopen("agenda.txt", "r");
                if (f == NULL) { return -1;}
                for (int i = 0; qtd_bytes != 0; i++) {
                fseek(f, i * sizeof(struct agenda), 0);
                qtd_bytes = fread(dados, sizeof(struct agenda), 1, f);
                if (comparar(nome, dados->nome)) {
                return i;}}
                return -1;}

//-----------------------------------------------------------------------------------------

                void pesquisar_registro(struct agenda *dados){
                char contato[20];
                printf("\n\n=============================================");
                printf("\n                     PESQUISAR CONTATO                      ");
                printf("\n=============================================");
                printf("\nDigite o nome da contato que deseja procurar: ");
                scanf("%19s", contato);
                getchar();
                int resultado = pesquisa(contato, dados);

                if (resultado == -1) {
                printf("Na ha nenhum cadastro com esse nome.");
                return;}
                exibir_contato(contato);}


//-----------------------------------------------------------------------------------------
                void alterar_contato(struct agenda *dados){
                printf("\n\n=============================================");
                printf("\n                     ALTERAR CONTATO                      ");
                printf("\n=============================================");
                char contato[20];
                printf("\nDigite o nome do contato que deseja alterar: ");
                scanf("%19s", contato);
                getchar();
                int resultado = pesquisa(contato, dados);
                if (resultado == -1) {
                printf("\nContato nao cadastrado.\n");
                return;}
                printf("\n\nContato a ser alterada:\n\n");
                exibir_contato(dados);
                printf("\nNome: ");
                gets(dados->nome);
                printf("\nTelefone: ");
                gets(dados->celular);
                printf("\nEmail: ");
                gets(dados->email);
                alterar_agenda(dados, resultado);
                printf("\n\nAlteracao realizada com sucesso.");}
//-----------------------------------------------------------------------------------------

                void excluir_registro(struct agenda *dados){
                printf("\n\n=============================================");
                printf("\n                     EXCLUIR CONTATO                    ");
                printf("\n=============================================");
                char contato[20];
                printf("\nDigite o nome do contato que deseja excluir: ");
                scanf("%19s", contato);
                getchar();
                int resultado = pesquisa(contato, dados);
                if (resultado == -1) {
                printf("\nContato nao cadastrado.\n");
                return;}
                printf("\n\nConato a ser excluido:\n\n");
                exibir_contato(dados);
                for (int c = 0; c < sizeof(dados->nome) &&sizeof(dados->email) && sizeof(dados->celular); c++) {dados->nome[c] = '*';dados->celular[c]= '*';dados->email[c] ='*';}
                alterar_agenda(dados, resultado);
                printf("\n\nExcluido com sucesso.");}
//-----------------------------------------------------------------------------------------

                void sair(){
                printf("\n\nAte mais.");
                exit(0);}
//-----------------------------------------------------------------------------------------

    int main(){
    int opcao;
    struct agenda dados;
while(1){
    printf("\n=============================================");
    printf("\n                     MENU                                              ");
    printf("\n=============================================");
    printf("\n\n1 - Incluir registros\n\2 - Listar todos os registros\n3 - Pesquisar registro pelo nome\n4 - Altera registro\n5 - Exclui registro\n6 - Saida");
    printf("\nDigite a opcao desejada: ");
    scanf("%d",&opcao);
    getchar();
switch (opcao){

case 1:

    incluir_registros(&dados);

break;

case 2:

    imprimir_registros(&dados);

break;

case 3:

    pesquisar_registro(&dados);

break;

case 4:

    alterar_contato(&dados);

break;

case 5:

    excluir_registro(&dados);

break;

case 6:
    sair();


default:
    printf("\nOpcao invalida. Tente novamente.");}}}
#endif // ex4
