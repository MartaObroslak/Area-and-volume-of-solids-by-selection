#include <iostream>
#include <cmath>
using namespace std;
void obliczSzescian(float a) {
 float pole = 6 * pow(a, 2);
 float objetosc = pow(a, 3);
 cout << "Pole powierzchni: " << pole << endl;
 cout << "Objetosc: " << objetosc << endl;
}
void obliczProstopadloscian(float a, float b, float c) {
 float pole = 2 * (a * b + b * c + c * a);
 float objetosc = a * b * c;
 cout << "Pole powierzchni: " << pole << endl;
 cout << "Objetosc: " << objetosc << endl;
}
void obliczWalec(float r, float h) {
 float pole = 2 * M_PI * r * (r + h);
 float objetosc = M_PI * pow(r, 2) * h;
 cout << "Pole powierzchni: " << pole << endl;
 cout << "Objetosc: " << objetosc << endl;
}
void obliczKula(float r) {
 float pole = 4 * M_PI * pow(r, 2);
 float objetosc = (4.0 / 3.0) * M_PI * pow(r, 3);
 cout << "Pole powierzchni: " << pole << endl;
 cout << "Objetosc: " << objetosc << endl;
}
int main() {
 char figura;
 char ponownie;
 do {
 cout << "Program liczy pole powierzchni i objetosc wybranej bryly:" << endl;
 cout << "S - szescian" << endl;
 cout << "P - prostopadloscian" << endl;
 cout << "W - walec" << endl;
 cout << "K - kula" << endl;
 cout << "Wybierz figure: ";
 cin >> figura;
 switch (figura) {
 case 'S':
 case 's': {
 float a;
 cout << "Podaj wymiar krawedzi szescianu: ";
 cin >> a;
 obliczSzescian(a);
 break;
 }
 case 'P':
 case 'p': {
 float a, b, c;
 cout << "Podaj wymiar pierwszej krawedzi prostopadloscianu: ";
 cin >> a;
 cout << "Podaj wymiar drugiej krawedzi prostopadloscianu: ";
 cin >> b;
 cout << "Podaj wymiar trzeciej krawedzi prostopadloscianu: ";
 cin >> c;
 obliczProstopadloscian(a, b, c);
 break;
 }
 case 'W':
 case 'w': {
 float r, h;
 cout << "Podaj promien podstawy walca: ";
 cin >> r;
 cout << "Podaj wysokosc walca: ";
 cin >> h;
 obliczWalec(r, h);
 break;
 }
 case 'K':
 case 'k': {
 float r;
 cout << "Podaj promien kuli: ";
 cin >> r;
obliczKula(r);
 break;
 }
 default:
 cout << "Nieprawidlowy wybor figury!" << endl;
 continue;
 }
 cout << "Czy wykonać obliczenia jeszcze raz (T/N)?: ";
 cin >> ponownie;
 } while (ponownie == 'T' || ponownie == 't');
 return 0;
}