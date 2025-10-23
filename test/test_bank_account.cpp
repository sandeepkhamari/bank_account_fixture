#include <iostream>
#include "../include/bank_account.hpp"
#include <gtest/gtest.h>

class BankAccountTest: public ::testing::Test
{
   protected:
   BankAccount ac;
   
   void SetUp() override 
   {
      ac.initiate();
      ac.deposit(100);
   }
   
   void TearDown() override {}
};

TEST_F(BankAccountTest, WithdrawWithinBalance)
{
   //ac.initiate();
   //ac.deposit(100);
   //EXPECT_EQ(ac.withdraw(50), true);
   EXPECT_TRUE(ac.withdraw(50));
   EXPECT_EQ(ac.get_balance(), 50);
}

TEST_F(BankAccountTest, WithdrawBeyondBalance)
{
   //ac.initiate();
   //ac.deposit(100);
   EXPECT_FALSE(ac.withdraw(110));
   EXPECT_EQ(ac.get_balance(), 100);
}
