#include <stdio.h>
int main()
{
    FILE* plik1, * plik2;
    fopen_s(&plik1, "miasta.txt", "r");
    fopen_s(&plik2, "miasta2.txt", "w");
    char litera;
    while ((litera = fgetc(plik1)) != EOF) {
        if (litera ==' ') {
            fputc('\n', plik2);
        }else{
        fputc(litera, plik2);
        }
    }
    fclose(plik1);
    fclose(plik2);
}
