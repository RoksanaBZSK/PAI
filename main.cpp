#include <iostream>
#include <cmath> //doda�am bibliotek� matematyczn�
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
  
  int wiek = 18; //"program" podaj�cy wiek
  cout << "Mam " << wiek << " lat." << endl;
  
  int x; //"program podaj�cy numer"
  cout << "Podaj numer: " << endl;
  cin >> x;
  cout << "Tw�j numer to: " << x << endl;
  
  int a, b;
  int suma;
  cout << "Podaj pierwszy numer: " << endl;
  cin >> a;
  cout << "Podaj drugi numer: " << endl;
  cin >> b; suma = a + b;
  cout << "Suma to: " << suma << endl;
  
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << txt << endl;
  cout << "D�ugo�� tekstu to: " << txt.length() << endl;
  
  return 0;
}
