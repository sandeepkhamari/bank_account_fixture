#include <iostream>
#include "bank_account.hpp"

int main()
{
  BankAccount ac;
  ac.initiate();
  std::cout<<ac.get_balance()<<std::endl;
  ac.deposit(100);
  std::cout<<ac.get_balance()<<std::endl;
  std::cout<<ac.withdraw(50)<<std::endl;
  std::cout<<ac.get_balance()<<std::endl;
  std::cout<<ac.withdraw(60)<<std::endl;
  return 0;
}
