#include <iostream>
using namespace std;
int main() {
  double camount, bamount, pamount;

  cout << "Enter number of Colombian Pesos: ";
  cin >> camount;
  cout << "Enter number of Brazilian Reais: ";
  cin >> bamount;
  cout << "Enter number of Peruvian Soles: ";
  cin >> pamount;

  cout << "US Dollars = $" << camount * .00024 << "\n";
  cout << "US Dollars = $" << bamount * 5.64 << "\n";
  cout << "US Dollars = $" << pamount * .27 << "\n";
}
