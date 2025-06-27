#include <stdio.h>

int main() {
    
    int index;

    const char *nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "mat: 90"},
        {"Aluno 1", "Pt: 40", "mat: 80"},
        {"Aluno 2", "Pt: 50", "mat: 70"}
    };

    printf("Digite o numero de aluno que queira ver as notas...\n");
    printf("para o aluno 0, digite 0\n");
    printf("para o aluno 1, digite 1\n");
    printf("para o aluno 2, digite 2\n");

    scanf("%d", &index);

    printf(" A nota do aluno %s são: %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}