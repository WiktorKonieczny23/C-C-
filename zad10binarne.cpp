#include <stdio.h>

void zapiszTabliceDoPliku(float* liczby, int rozmiar){
	FILE* plik;
	fopen_s(&plik, "dane.bin", "wb");
	fwrite(liczby, sizeof(float), rozmiar, plik);
	fclose(plik);
}
void odczytaj() {
	FILE* plik;
	fopen_s(&plik, "dane.bin", "rb");
	float cyferki;
	int i;
	for (i = 0; i < 10; i++) {
	fread(&cyferki, sizeof(float), 1, plik);
	printf("%f\n", cyferki);
	}
	fclose(plik);
}

int main()
{
	float liczby[10] = { 2.3, 1.5, 3.2, 7.1, 0.2, 1, 1, 5, 9.9, 10 };
	int rozmiar = 10;
	zapiszTabliceDoPliku(liczby, rozmiar);
	odczytaj();
}