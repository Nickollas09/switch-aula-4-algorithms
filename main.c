#include<stdio.h>

int main(){
    int opcao, presenca;
    float nota_1, nota_2, media;
    printf("--- MENU ---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 -  PRESENCA DO ALUNO\n");
    printf("digite a opcao desejada");
    scanf("%d", &opcao);
    switch (opcao){
     case 1: 
        printf("\n--- MEDIA DO ALUNO ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        media = (nota_1 + nota_2)/2;
        printf("A media final do aluno e: %.2f", media);
        break;

        case 2: 
        printf("\n--- PRESENCA DO ALUNO ---\n");
        printf(" Digite a presenca do aluno (0 - 100): ");
        scanf("%d", &presenca);
        if(presenca > 74 && presenca < 100) {
            printf("Aluno aprovado com %d %%", presenca);
        } else if(presenca <= 0 || presenca < 74 ){
            printf("Aluno reprovado com %d %%", presenca);
        }
        break;

        default:
        printf("opcao invalido!");
    }
        return 0;
}