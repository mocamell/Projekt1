

#include<iostream>
#include<stdio.h>//kod 02_12
using namespace std;
int main() {
    //zad1
      /* for (int i = 0; i < 10; i++) {
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
        for (int i = 0; i<=10; i=i+2) {
        cout << i << endl;
        }
        for (int i = 10;i>=0 ; i=i-1) {
        cout << i << endl;
         }*/

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
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14 
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
        //printf("%3.0f \t %6.1f \n", fahr, celsius);
    }

    */

        //zad5
    /*
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
    {
        float celsius = (5.0/9.0)* (fahr - 32.0);
        printf("%3.0f \t %6.1f \n", fahr, celsius);

    }*/

        //zad6
    /*float fahr, celsius; //zmienne typu int 
    float start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    fahr = start;
    
    cout << "Podaj zmienna limit: ";
    cin >> limit;
    cout << "Podaj zmienna krok: ";
    cin >> krok;
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
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
     
    int n;
    cout << "Podaj liczbe calkowita: ";
    cin >> n;
    for (int i=0; i>=0&&i<=100&&i%n==0; i++) {
        cout << i << endl;
	}
    return 0;
    
}



