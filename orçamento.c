#include <stdio.h>

int main(void) {
    char resposta;
    printf ("cornformação do orçamento (S/N) ");
    scanf ("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        printf("orçamento confirmado");
    else if (resposta == 'N' || resposta == 'n')
        printf("Orçamento  não confirmado ");
    else
        printf("Resposta inválida. Por favor, digite 'S' para sim ou 'N' para não.");

return 0;
}