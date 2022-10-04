// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 3 - 22
// This program calculates the price of products and tax

#include <iostream>
#include <iomanip>

int main() {
  // Fix the tax as a constant
  float HST = 0.05;
  float totalPrice;
  std::cout << "What is the total price of your cart?: $";
  // get input from the user of the price of their items.
  std::cin >> totalPrice;
  float tax;
  tax = totalPrice * HST;
  float totalCost;
  totalCost = totalPrice + tax;
  std::cout << "The total cost is $" << std::fixed << std::setprecision(2) << std::setfill('0')
  << totalPrice <<" + $"<< tax << std::endl;
  std::cout << "The total cost is $";
  std::cout << std::fixed << std::setprecision(2) << std::setfill('0');
  std::cout << totalCost << std::endl;
}
