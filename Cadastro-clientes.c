#include <stdio.h>
#include <stdlib.h>

struct Cadastro - clientes
{
    char nome[50];
    char email[50];
};

int main()
{
    struct Cadastro - clientes cliente;
    int opcao, numClientes = 0;

    do
    {
        printf("Selecione a opção:\n");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Visualizar CLiente\n");
        printf("3 - Editar CLiente\n");
        printf("4 - Excluir cliente\n");
        printf("5 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o nome do cliente: ");
            scanf("%s", clientes[numClientes].nome);

            printf("Digite o email do cliente: ");
            scanf("%s", clientes[numClientes].email);

            numClientes++;

            printf("Cliente adicionado com sucesso.\n");
            break;
        case 2:
            printf("Clientes cadastrados:\n");

            for (int i = 0; i < numClientes; i++)
            {
                printf("Nome: %s\n", clientes[i].nome);
                printf("Email: %s\n", clientes[i].email);
                printf("----------------------\n");
            }
            break;
        case 3:
            char nome[100];

            printf("Digite o nome do cliente que deseja editar: ");
            scanf("%s", nome);

            for (int i = 0; i < numClientes; i++)
            {
                if (strcmp(clientes[i].nome, nome) == 0)
                {
                    printf("Digite o novo nome do cliente: ");
                    scanf("%s", clientes[i].nome);

                    printf("Digite o novo email do cliente: ");
                    scanf("%s", clientes[i].email);

                    printf("Cliente editado com sucesso.\n");
                    break;
                }
            }
            break;
        case 4:
            char nome[100];

            printf("Digite o nome do cliente que deseja excluir: ");
            scanf("%s", nome);

            for (int i = 0; i < numClientes; i++)
            {
                if (strcmp(clientes[i].nome, nome) == 0)
                {
                    for (int j = i; j < numClientes - 1; j++)
                    {
                        clientes[j] = clientes[j + 1];
                    }

                    numClientes--;

                    printf("Cliente excluído com sucesso.\n");
                    break;
                }
            }
            break;
        case 5:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    } while (opcao != 5);
    {
        /* code */
    }

    return 0;
    
}
