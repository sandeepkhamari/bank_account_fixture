#include "../include/bank_account.hpp"

void BankAccount::deposit(int amount)
{
   balance+=amount;
}

bool BankAccount::withdraw(int amount)
{
  if(balance < amount)
  {
    return false;
  }
  else
  {
    balance-=amount;
  }
  return true;
}

int BankAccount::get_balance(void)
{
  return balance;
}

void BankAccount::initiate(void)
{
  balance=0;
}
