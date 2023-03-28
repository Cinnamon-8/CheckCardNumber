#include <iostream>
int getDigit(const int number);
int getEvenDigit(const std::string cardNumber);
int getOddDigit(const std::string cardNumber);
int main() {
  std::string cardNumber;
  std::cout << "Enter Your Credit Card Number :: ";
  std::cin >> cardNumber;
  int result = 0;
  result = getEvenDigit(cardNumber) + getOddDigit(cardNumber);

  if (result % 10 == 0) {
    std::cout << cardNumber << " Your Card Number Is Vaild !!! ";
  } else {
    std::cout << cardNumber << " Your Card Number Is Not Vaild !!! Dont try to scam";
  }
  return 0;
}
int getDigit(const int number) { return number % 10 + (number / 10 % 10); }
int getEvenDigit(const std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}
int getOddDigit(const std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
    sum += cardNumber[i] - '0';
  }
  return sum;
}