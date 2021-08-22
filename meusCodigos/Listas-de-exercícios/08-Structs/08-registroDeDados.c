#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct Pessoa{
    char nome[30], sexo, nascimento[12], cpf[15];
    int idade;
}Pessoa;

struct Funcionario{
    int codSetor;
    char cargo[30];
    float salario;
    Pessoa pessoa;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Funcionario funcionario;

    //Lendo dados do usuário.
    printf("\n------- INSERIR DADOS DO FUNCIONÁRIO -------\n");
    printf("NOME: ");
    scanf(" %[^\n]s", &funcionario.pessoa.nome);
    printf("IDADE: ");
    scanf("%d", &funcionario.pessoa.idade);
    printf("SEXO (M / F): ");
    scanf(" %c", &funcionario.pessoa.sexo);
    printf("CPF (Digite utilizando pontos e dígitos): ");
    scanf(" %[^\n]s", &funcionario.pessoa.cpf);
    printf("DATA DE NASCIMENTO (Utilize barras e sem espaços): ");
    scanf(" %[^\n]s", &funcionario.pessoa.nascimento);
    printf("CÓDIGO DO SETOR (0-99): ");
    scanf("%d", &funcionario.codSetor);
    printf("CARGO: ");
    scanf(" %[^\n]s", &funcionario.cargo);
    printf("SALÁRIO: ");
    scanf("%f", &funcionario.salario);

    //Exibindo dados do funcionário.
    printf("\n------- DADOS DO FUNCIONÁRIO -------\n");
    printf("NOME: %s\n", funcionario.pessoa.nome);
    printf("IDADE: %d anos\n", funcionario.pessoa.idade);
    printf("SEXO (M / F): %c\n", funcionario.pessoa.sexo);
    printf("CPF (Digite utilizando pontos e dígitos): %s\n", funcionario.pessoa.cpf);
    printf("DATA DE NASCIMENTO (Utilize barras e sem espaços): %s\n", funcionario.pessoa.nascimento);
    printf("CÓDIGO DO SETOR (0-99): %d\n", funcionario.codSetor);
    printf("CARGO: %s\n", funcionario.cargo);
    printf("SALÁRIO: R$ %.2f", funcionario.salario);
    printf("\n------------------------------------\n\n");
}