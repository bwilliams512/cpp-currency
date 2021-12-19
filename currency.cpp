/*
The user just returned from a trip to South America. 
The countries she visited were Colombia, Brazil, and Peru. 
She arrived back in her country with some foreign currencies from these three countries.

This is a C++ program called currency.cpp that prompts the user for the amount of each foreign currency.

My program converts the amount entered by the user and displays the total amount of USD.
*/

#include <iostream>

int main() {
  
  // Declare 3 variables
  double pesos;
  double reais;
  double soles;
  
  // Declare another variable to store the amount you have in dollars
  double dollars;

  // Ask the user the first question
  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;

  // Ask the user again for the other two currencies
  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  // 1 Peso/Pesos to USD rate: 0.00025
  // 1 Real/Reais to USD rate: 0.18
  // 1 Sol/Soles to USD rate: 0.25

  // Write an equation that solves for the total USD
  dollars = (0.00025 * pesos) + (0.18 * reais) + (0.25 * soles);

  // Display the total amount of USD
  std::cout << "Total USD = $" << dollars << "\n";
  
}
