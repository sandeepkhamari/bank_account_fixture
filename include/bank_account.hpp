#include <iostream>

class BankAccount
{
   public:
      void deposit(int amount);
      bool withdraw(int amount);
      int  get_balance(void);
      void initiate(void);
   private:
      int balance;
};
