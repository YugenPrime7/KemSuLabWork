/********************************
* Автор: Горбунов Р.А.          *
* Задание: Циклы с условиями    *
* Вариант: 4                    *
********************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, y, g, d, U, d1, d2, d3, d4, h1, h2;
  //Для вычислений я брал значения из задачи, а именно: a = 0.074; y = 1.0; g = 980.0; d1 = 0.1; d2 = 0.5; h1 = 0.1; d3 = 0.5; d4 = 3.0; h2 = 0.5 
  cout << "Surface tension sigma: ";
  cin >> a;

  cout << "Specific weight of water gamma: ";
  cin >> y;

  cout << "Acceleration of gravity g: ";
  cin >> g;

  cout << "First section start d1: ";
  cin >> d1;

  cout << "First section end d2: ";
  cin >> d2;

  cout << "First section step h1: ";
  cin >> h1;

  cout << "Second section start d3: ";
  cin >> d3;

  cout << "Second section end d4: ";
  cin >> d4;

  cout << "Second section step h2: ";
  cin >> h2;

  d = d1;
  do {
    U = sqrt(g * d / 2.0 + 2.0 * g * a / (y * d));
    cout << "\nBubble diameter: " << d << "\t\t" << U << " :Bubble rise velocity" << endl;
    d += h1;
  } while (d <= d2);

  d = d3;
  while (d <= d4) {
    U = sqrt(g * d / 2.0 + 2.0 * g * a / (y * d));
    cout << "\nBubble diameter: " << d << "\t\t" << U << " :Bubble rise velocity" << endl;
    d += h2;
  }
  return 0;
}