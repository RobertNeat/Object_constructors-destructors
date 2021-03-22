#include "Tosoba.h"
#include <cstdio>
#include <string.h>
#include <iostream>

using namespace std;


Tosoba::Tosoba()
{
    strncpy(imie,"Imie",19);
    nazwisko="Nazwisko";
    dataUrodzenia.r=1000;
    dataUrodzenia.m=12;
    dataUrodzenia.d=28;
    cout<<endl<<"-------------------------------------"<<endl;
          cout<<"# Wywolanie konstruktora domyslnego #";
    cout<<endl<<"-------------------------------------"<<endl<<endl;
}

Tosoba::Tosoba(char* im,string naz,data dataUr){
    strncpy(imie,im,19);
    nazwisko=naz;
    dataUrodzenia.r=dataUr.r;
    dataUrodzenia.m=dataUr.m;
    dataUrodzenia.d=dataUr.d;

    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Wywolanie konstruktora przeciazonego #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
}

void Tosoba::wczytaj(){
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Wywolanie metody wczytaj()           #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Data:"<<endl<<"Rok:";
    cin>>dataUrodzenia.r;
    cout<<endl<<"Miesiac:";
    cin>>dataUrodzenia.m;
    cout<<endl<<"Dzien:";
    cin>>dataUrodzenia.d;
}


void Tosoba::wyswietl(){
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Wywolanie metody zwyklej wyswietl()  #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
cout<<"Imie:"<<imie<<endl<<"Nazwisko:"<<nazwisko<<endl;
cout<<"Rok:"<<dataUrodzenia.r<<endl;
cout<<"Miesiac:"<<dataUrodzenia.m<<endl;
cout<<"Dzien:"<<dataUrodzenia.d<<endl;

}

void Tosoba::wyswietl(int biezacyRok){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Wywolanie metody przeciazonej wyswietl() #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;

cout<<"Imie:"<<imie;
cout<<endl<<"Nazwisko:"<<nazwisko;
cout<<endl<<"Wiek:"<<biezacyRok-dataUrodzenia.r<<endl;
}

void Tosoba::info(){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Wywolanie metody zwyklej info()          #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;

cout<<"Osoba ukonczyla 18 lat w roku: "<<dataUrodzenia.r+18<<endl;
}

void Tosoba::info(int biezacyRok){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Wywolanie metody przeciazonej info() #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;
    wiek=biezacyRok=dataUrodzenia.r;
    if(wiek<18){
       cout<<"Osoba jest dzieckiem"<<endl;
    }
    if(wiek==18){
       cout<<"Osoba jest pelnoletnia"<<endl;
    }
    if(wiek>18 && wiek<50){
       cout<<"Osoba jest 30+"<<endl;
    }
    if(wiek>50){
       cout<<"Osoba jest 50+"<<endl;
    }
}


Tosoba::~Tosoba()
{
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Wywolanie dekonstruktora             #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
}
