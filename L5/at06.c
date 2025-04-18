// Crie uma função para validar uma entrada de dados. A função receberá como argumento um caractere, e deverá retornar 0 (zero) se o caractere não for um digito decimal (0,1,2...9) ou 1 (um), se o caractere for decimal. Lembrando que o código ASCII do 0 (zero) é 48 e do 9 (nove) 57

#include <stdio.h>

int validac(char c) {
    if (c >= '0' && c <= '9') {
        return 1; 
    }
    return 0; 
}

int main() {
    char c;
    
    printf("Insira um caractere: ");
    scanf("%c", &c);
    
    if (validac(c)) {
        printf("O caractere '%c' é um dígito decimal.\n", c);
    } else {
        printf("O caractere '%c' não é um dígito decimal.\n", c);
    }

    return 0;
}
