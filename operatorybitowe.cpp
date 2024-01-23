#include <stdio.h>

void konwersja(int decimal, char binary[]) {
    for (int i = 31; i >= 0; i--) {
        binary[i] = (decimal & 1) ? '1' : '0';
        decimal >>= 1;
    }
    binary[32] = '\0';
}

int main() {
    int liczba;
    printf("Podaj liczbe dziesietna: ");
    scanf_s("%d", &liczba);

    char wynik[33];
    konwersja(liczba, wynik);

    printf("Liczba binarna: %s ", wynik);

    return 0;
}