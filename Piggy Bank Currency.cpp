#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << " Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Poses conversion rate: 0.00032
  // Reais conversion rate: 0.27
  // Soles conversion rate: 0.3

  dollars = 0.00032 * pesos + 0.27 * reais + 0.3 *soles;

  std::cout << "Total USD = $" << dollars << "\n";



}