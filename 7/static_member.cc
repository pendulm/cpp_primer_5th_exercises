#include <iostream>
#include <string>


class Account {
public:
  void calculate() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double);
private:
  std::string owener;
  double amount;
  static double interestRate;
  static double initRate();
  static constexpr int period = 30;
  double daily_tbl[period];
public:
  static constexpr double bbb = 12.0;
};
double Account::initRate() { return 1.0; }
double initRate() { return 2.0; }
double Account::interestRate = initRate();
class Screen {
public:
  Screen& clear(char = bkground);
private:
  const char bkground = 'c';
};
int main()
{
  std::cout << Account::rate() << std::endl;
  std::cout << Account::bbb << std::endl;
  return 0;
}
