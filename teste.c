#include <stdlib.h>
#include <stdio.h>

int main(){

    int a;

        printf("Digite a Idade:");
        scanf("%d", &a);

        a--;

        printf("Idade:%d", a);

        a += 1;
        printf("Sua Idade original:%d\n", a);
    
    return 0;
}
