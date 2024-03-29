#include "Account_util.h"

void display(const std::vector<Account> &accounts)
{
  for (const auto &account: accounts)
    std::cout << account << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount)
{
  for (auto &account: accounts)
    if (account.deposit(amount))
      std::cout << "Deposited " << amount << " to " << account << std::endl;
    else
      std::cout << "Failed deposit of " << amount << " to " << account << std::endl;
}

void withdraw(std::vector<Account> &accounts, double amount)
{
  for (auto &account: accounts)
    if (account.withdraw(amount))
      std::cout << "Withdraw " << amount << " from " << account << std::endl;
    else
      std::cout << "Failed withdraw of " << amount << " from " << account << std::endl;
}

void display(const std::vector<Saving_account> &saving_accounts)
{
  for (const auto &saving_account: saving_accounts)
    std::cout << saving_account << std::endl;
}

void deposit(std::vector<Saving_account> &saving_accounts, double amount)
{
  for (auto &saving_account: saving_accounts)
    if (saving_account.deposit(amount))
      std::cout << "Deposited " << amount << " to " << saving_account << std::endl;
    else
      std::cout << "Failed deposit of " << amount << " to " << saving_account << std::endl;
}

void withdraw(std::vector<Saving_account> &saving_accounts, double amount)
{
  for (auto &saving_account: saving_accounts)
    if (saving_account.withdraw(amount))
      std::cout << "Withdraw " << amount << " from " << saving_account << std::endl;
    else
      std::cout << "Failed withdraw of " << amount << " from " << saving_account << std::endl;
}
