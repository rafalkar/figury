#include <iostream>

using namespace std;

enum {EXIT, KWADRAT, PROSTOKAT, TROJKAT, TRAPEZ};

int main()
{
    int wybor; // zmienna obslugujaca [switch]
    int a,b,h; //boki figur + h - wysoksc
    int pole; // pole powierzchni kwadratu i prostokata
    float pole_t; // pole trojkata i trapezu
    bool exit = false;

    cout << "Pola powierzchni figrur plaskich" << endl;
    while(!exit)  // poczatek petli while; zaprzeczenie !
    {
        cout << "Wybierz jedna z figur" << endl;
        cout << "1. Kwadrat, 2. Prostokat, 3. Trojkat, 4. Trapez, 0. EXIT" << endl;
        cin >> wybor;
        switch(wybor)
        {
            case EXIT:
                exit = true; break;
            case KWADRAT:
                {
                 cout << "Wybrano Kwadrat" << endl;
                 cout << "Podaj bok a ";
                 cin >> a; cout << endl;
                 pole = a*a;
                 cout << "Pole kwadratu = " <<pole <<endl;
                 //exit = true;
                }
            case PROSTOKAT:
                {
                 cout << "Wybrano Prostokat" << endl;
                 cout << "Podaj bok a ";
                 cin >> a; cout << endl;
                 cout << "Podaj bok b ";
                 cin >> b; cout << endl;
                 pole = a*b;
                 cout << "Pole prostokatu = " <<pole <<endl;
                 //exit = true;
                }
            case TROJKAT:
                {
                 cout << "Wybrano TROJKAT" << endl;
                 cout << "Podaj bok a ";
                 cin >> a; cout << endl;
                 cout << "Podaj wysokosc h ";
                 cin >> h; cout << endl;
                 pole_t = (a*h)*0.5;
                 cout << "Pole trojkatu = " <<pole_t <<endl;
                 //exit = true;
                }
            case TRAPEZ:
                {
                 cout << "Wybrano Trapez" << endl;
                 cout << "Podaj bok a ";
                 cin >> a; cout << endl;
                 cout << "Podaj bok b ";
                 cin >> b; cout << endl;
                 cout << "Podaj wysokosc h ";
                 cin >> h; cout << endl;
                 pole_t = ((a+b)*h)*0.5;
                 cout << "Pole trapezu = " <<pole_t <<endl;
                 //exit = true;
                }
        }
    }       // koniec petli while

    return 0;
}
