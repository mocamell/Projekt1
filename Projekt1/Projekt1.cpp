
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<stdio.h>//kod 02_12
using namespace std;
int main() {
    //zad1
    /*
    for (int i = 0; i < 10; i++) {
        cout << i << endl;

        for (int i = 0; i <= 10; i++) {
            cout << i << endl;
        }
        for (int i = 5; i >= 5 && i <= 7; i++) {
            cout << i << endl;
        }

        for (int i = 5; i >= 5 && i < 7; i++) {
            cout << i << endl;
        }
        for (int i = 0; i <= 10; i = i + 2) {
            cout << i << endl;
        }
        for (int i = 10;i >= 0; i = i - 1) {
            cout << i << endl;
        }
    }
    */
    //zad2
    /*
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }
    */
        //zad3
    /*
    float fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
       
    }
    */
    //Dzięki zamianie int na float liczby wyswietlają się z wartościami po przecinku zamiast całkowitych

        //zad5
    /*
    float fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
    {
        float celsius = (5/9)* (fahr - 32.0);
        printf("%3.0f \t %6.1f \n", fahr, celsius);

    }
    Zmiana zapisu na 5/9- wyniki celsius są równe 0
    */
        //zad6
    /*float fahr, celsius; //zmienne typu int 
    float start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    fahr = start;
    
    cout << "Podaj zmienna limit: ";
    cin >> limit;
    cout << "Podaj zmienna krok: ";
    cin >> krok;
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) 
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr<<"\t" << celsius << endl;

    }*/

    //zad7
    /*
    int liczba;
    
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe rzeczywista: ";
        cin >> liczba;
        if (liczba > 0) {
            cout << liczba << endl;
    }
    }*/

    //zad8
    /*
    for (int i = 0; i >= 0 && i <= 100; i = i + 2) {
        cout << i << endl;
    }
    */

    //zad9
    /*
    int n;
    cout << "Podaj liczbe calkowita: ";
    cin >> n;
    for (int i = 0; i >= 0 && i <= 100 ; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
	}
    */

    //Zad 10
/*
int n;
int suma = 0;
cout << "Podaj wartosc calkowita: ";
cin >> n;
for (int i = 0; i <= 100; i++) {
    if (i % n == 0) {
        suma++;
    }
}
cout << "W przedziale [0,100] jest " << suma << "liczb podzielnych przez " << n;
*/

    //zad 11
/*
int a;
int b;
cout << "Podaj pierwsza liczbe calkowita: ";
cin >> a;
cout << "Podaj druga liczbe calkowita: ";
cin >> b;
if (a < b) {
    for (int c = a; c >= a && c <= b; c++) {
        if (c % 3 == 0) {
            cout << c << endl;
        }
    }
}
else if (b < a) {
    for (int d = b; d >= b && d <= a; d++) {
        if (d % 3 == 0) {
            cout << d << endl;
        }
    }
}
*/
//zad12
/*
int n;
float liczba;
float razem = 0;
float srednia =0;
cout << "Podaj liczbe calkowita: ";
cin >> n;
for (int i = 1; i <= n; i++) {
    cout << "Podaj liczbe rzeczywista: ";
    cin >> liczba;
    razem = razem+liczba;
}
srednia = razem / n;
cout << "Srednia arytmetyczna wynosi: " << srednia << endl;
*/

//zad13
/*
for (int i = 100; i >= 0;i=i-1) {
    cout << i << endl;
}
*/
//zad14
/*
int a;
int b;
int c;
cout << "Podaj pierwsza liczbe calkowita: ";
cin >>a;
cout << "Podaj druga liczbe calkowita: ";
cin >> b;
cout << "Podaj trzecia liczbe calkowita: ";
cin >> c;
if (a < b && a < c) {
    cout << "Najmniejsza liczba to " << a;
}
else if (b<a && b < c) {
    cout << "Najmniejsza liczba to " << b;
}
else if (c<a && c<b) {
    cout << "Najmniejsza liczba to " << c;
}
*/
/*
//zad 15
srand(time(NULL));
int n;
int m;
int liczbaw;
cout << "Podaj ile liczb ma byc wylosowanych: ";
cin >> n;
cout << "Podaj gorna wartosc przedzialu: ";
cin >> m;
for (int i = 0; i <= n;i++) {
    liczbaw = rand() % (m + 1) + 20;
    cout << liczbaw << endl;
}
*/
/*
//zad16
srand(time(NULL));
int szn;
int los;
int suma=0;
cout << "Podaj liczbe calkowita od 1 do 10: ";
cin >> szn;
for (int i = 0; i <= 10; i++) {
    los = rand() % 10 + 1;
    cout << los << endl;
    if (los == szn) {
        suma++;
    }
}
cout << "Podczas losowania szczesliwy numerek zostal wylosowany " << suma << " razy."<<endl;
*/
    return 0;
  }



