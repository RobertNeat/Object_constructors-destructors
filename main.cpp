#include <iostream>
#include "Tosoba.h"

using namespace std;

int main()
{
    //Do konstruktora przeciazonego osoba2
    char *a=new char;
    char imie[20]="Jan";
    a=imie;

    //Do konstruktora przeciazonego osoba2
    data Date;
    Date.d=13;
    Date.m=12;
    Date.r=2000;

    Tosoba osoba1;
    Tosoba osoba2(a,"Kowalski",Date);//(char* imie,string nazwisko,data dataUrodzenia);

    osoba1.wyswietl();
    osoba2.wyswietl();
    osoba1.wyswietl(2021);


    osoba1.info();
    osoba2.info(2021);//parametr= biezacy rok

    osoba1.wczytaj();
    osoba1.wyswietl(2021);

    return 0;
}
