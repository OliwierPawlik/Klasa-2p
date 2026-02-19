#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*
 @file main.cpp
 @author Oliwier Lewkowicz-Pawlik
 @date 2026-02-17
 @brief Aplikacja konsolowa ktora pozwala na wyswietlenie tablicy z pliku
        wyszukiwania liczby i jej indeksu oraz sortowanie tablicy w C++
 */

vector<int> tab;


/*
 @brief wczytuje plik dane.txt.
 @param typ pliku oraz tekst.
 @return liczba podana przez uzytkownika
*/

void wczytaj () {
    ifstream plik("dane.txt");
    string linia;
    if (plik.is_open()) {
        while (getline(plik, linia)) {
            tab.push_back(stoi(linia));
        }
        plik.close();
    }
    else {
        cout << "nie udalo sie otworzyc pliku.";
    }

}

/*
 @brief sortuje tablice z danymi z pliku
 funkcja zwraca do programu liczbe 'a' podana przez uzytkownika
 ktora zostanie uzyta pozniej do wyszukania podanej liczby w tablicy.

 @return nie zwraca nic - void
*/

void posortuj () {

    for (int i = 0; i < tab[i]; ++i) {
        for (int j = i + 1; j < tab[i]; ++j) {
            if (tab[j] < tab[i]) {
                swap(tab[i], tab[j]);
            }
        }
    }

}

int poszukaj () {

    int a;
    cout << "Podaj liczbe: ";
    cin >> a;

    for (int i = 0; i < tab[i]; ++i) {
        if (tab[i] == a) {
            cout << tab[i] << endl;
        }
    }

    return a;

}


void wyswietl () {
    for (int i = 0; i < tab.size(); ++i) {
        cout << tab[i] << " ";
    }


}

int main() {



    return 0;
}