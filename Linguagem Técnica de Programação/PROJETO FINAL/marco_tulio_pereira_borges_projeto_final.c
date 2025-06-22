#include <stdio.h>
#include <string.h>

int login() {

    char usuario[15], senha[15];

    int tentativas = 3;

    while (1) {
        if (tentativas == 0) {

            printf("Acesso bloqueado...\n");
            printf("Encerrando o programa...\n\n");
            return 0;
        }

        printf("+------------------+\n");
        printf("  Login: ");
        scanf("%s", &usuario);
        printf("  Senha: ");
        scanf("%s", &senha);
        printf("+------------------+\n\n");

        int usr_key = strcmp(usuario, "marcotulio");
        int pass_key = strcmp(senha, "Senha123");

        if(usr_key != 0){
            tentativas--;
            printf("Usuario inexistente, tente novamente.\n");
            printf("Tentativas restantes: %d.\n\n", tentativas);
        } else if(usr_key == 0 && pass_key != 0){
            tentativas--;
            printf("Senha incorreta, tente novamente.\n");
            printf("tentativas restantes %d.\n\n", tentativas);
        } else if (usr_key == 0 && pass_key == 0 && tentativas > 0) {
            printf("Acesso permitido!\n\n");
            return 1;
        }
    }
}

// Função para mostrar a frequência
void mostrar_freq(char disciplina[][50], int frequencia[]) {
    int i;
    printf("\n|--------------------------------------|--------------|\n");
    printf("| Disciplina                           | Frequencia   |\n");
    printf("|--------------------------------------|--------------|\n");
    for (i = 0; i < 8; i++) {
        printf("| %-36s | %3d%%         |\n", disciplina[i], frequencia[i]);
    }
    printf("|--------------------------------------|--------------|\n\n");
}

// Função para mostrar notas
void mostrar_notas(char disciplina[][50], float notas[]) {
    int i;
    printf("\n|--------------------------------------|--------------|\n");
    printf("| Disciplina                           | Nota Final   |\n");
    printf("|--------------------------------------|--------------|\n");
    for (i = 0; i < 8; i++) {
        printf("| %-36s | %-12.1f |\n", disciplina[i], notas[i]);
    }
    printf("|--------------------------------------|--------------|\n\n");
}

int main() {
    int login_ok, opcao;
    char disciplinas[8][50] = {
        "Linguagem Tecnica de Programacao",
        "Sistemas Distribuidos e de T. Real",
        "Laboratorio de Programacao",
        "Tecnologias Digitais Emergentes",
        "Algebra Linear e Geometria Analitica",
        "Teoria Geral dos Sistemas",
        "Estatistica Aplicada",
        "Arquitetura e Org. de Computadores"
    };

    float notas[8] = {8.5, 7.8, 8.1, 8.7, 7.6, 6.5, 9.7, 7.0};
    int frequencia[8] = {100, 96, 80, 95, 100, 84, 80, 98};

    login_ok = login();

    while (login_ok == 1) {
        printf("+------------------+\n");
        printf("|  MENU DE OPCOES  |\n");
        printf("+------------------+\n");
        printf("| 1. Frequencia    |\n");
        printf("| 2. Notas         |\n");
        printf("| 3. Sair          |\n");
        printf("+------------------+\n\n");

        printf("Insira a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            mostrar_freq(disciplinas, frequencia);
            break;
        case 2:
            mostrar_notas(disciplinas, notas);
            break;
        case 3:
            printf("\n\nEncerrando a sessao...\n\n");
            login_ok = 0; // Encerra o loop while
            break;
        default:
            printf("\nOpcao invalida, tente novamente.\n\n");
            break;
        }
    }

    return 0;
}