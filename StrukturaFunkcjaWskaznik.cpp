#include <iostream>
using namespace std;

struct Student {
    char imie[20];
    char nazwisko[20];
    int rokurodzenia;
    char pesel[12];
};

void wczytajDane(Student* wsk) {
    cout << "Podaj imie: ";
    cin >> wsk->imie;

    cout << "Podaj nazwisko: ";
    cin >> wsk->nazwisko;

    cout << "Podaj rok urodzenia: ";
    cin >> wsk->rokurodzenia;

    cout << "Podaj PESEL: ";
    cin >> wsk->pesel;
};
int main() {
    struct Student* qwerty = NULL;
    qwerty = (struct Student*)malloc(sizeof(struct Student*));
    wczytajDane(qwerty);

    cout << "Imie: " << qwerty->imie << endl;
    cout << "Nazwisko: " << qwerty->nazwisko << endl;
    cout << "Rok urodzenia: " << qwerty->rokurodzenia << endl;
    cout << "PESEL: " << qwerty->pesel << endl;

    free(qwerty);

    return 0;
}