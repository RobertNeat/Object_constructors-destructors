#ifndef TOSOBA_H
#define TOSOBA_H


#include <string>
#include <iostream>
//#include <cstdio>


using namespace std;

struct data{
int d,m,r;
};

class Tosoba
{
private:
    char imie[20];
    string nazwisko;
    data dataUrodzenia;
    int wiek;//do metody info
public:
    Tosoba();
    Tosoba(char* imie,string nazwisko,data dataUrodzenia);
    ~Tosoba();
    void wczytaj();
    void wyswietl();
    void wyswietl(int biezacyRok);
    void info();
    void info(int pelnoletnosc);
protected:

};

#endif // TOSOBA_H
