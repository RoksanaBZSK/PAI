#include <iostream>
#include <cmath> //doda³am bibliotekê matematyczn¹
using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  cout << "Roksana Brodawczuk nauka c++" << endl; //komentarz aoaoao
  int numer = 5; //zmienne
  double przecinki = 5.99;
  char litera = 'D';
  string tekst = "Hello";
  bool booler = true;
  
  int wiek = 18; //"program" podaj¹cy wiek
  cout << "Mam " << wiek << " lat." << endl;
  
  int x; //"program podaj¹cy numer"
  cout << "Podaj numer: " << endl;
  cin >> x;
  cout << "Twój numer to: " << x << endl;
  
  int a, b;
  int suma;
  cout << "Podaj pierwszy numer: " << endl;
  cin >> a;
  cout << "Podaj drugi numer: " << endl;
  cin >> b; suma = a + b;
  cout << "Suma to: " << suma << endl;
  
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << txt << endl;
  cout << "D³ugoœæ tekstu to: " << txt.length() << endl;
  
  return 0;
}
