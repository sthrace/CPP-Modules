#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

# define DEFAULT "\033[0m"
# define BLUE    "\033[34m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";created";
	std::cout << std::endl;
}

Account::Account()
{
	std::cout << "Constructor void called" << std::endl;
	_accountIndex = _nbAccounts++;
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t ttime = time(0);
	tm *local_time = std::localtime(&ttime);
	std::cout << "[";
	std::cout << 1900 + local_time->tm_year;
	if ((1 + local_time->tm_mon) < 10)
		std::cout << "0";
	std::cout << 1 + local_time->tm_mon;
	if (local_time->tm_mday < 10)
		std::cout << "0";
	std::cout << local_time->tm_mday;
	std::cout << "_";
	if (local_time->tm_hour < 10)
		std::cout << "0";
	std::cout << local_time->tm_hour;
	if (local_time->tm_min < 10)
		std::cout << "0";
	std::cout << local_time->tm_min;
	if (local_time->tm_sec < 10)
		std::cout << "0";
	std::cout << 1 + local_time->tm_sec;
	std::cout << "] ";
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";deposits:" << BLUE << _nbDeposits;
	std::cout << DEFAULT << ";withdwawals:" << BLUE << _nbWithdrawals;
	std::cout << DEFAULT << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";p_amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";deposit:" << BLUE << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
	std::cout << DEFAULT << ";nb_deposits:" << BLUE << _nbDeposits;
	std::cout << DEFAULT << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << DEFAULT << "index:" << BLUE << _accountIndex;
	std::cout << DEFAULT << ";p_amount:" << BLUE << checkAmount();
	if (withdrawal > checkAmount())
	{
		std::cout << DEFAULT << ";withdrawal:refused";
		std::cout << DEFAULT << std::endl;
		return (false);
	}
	else
	{
		std::cout << DEFAULT << ";withdrawal:" << BLUE << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << DEFAULT << ";amount:" << BLUE << checkAmount();
		std::cout << DEFAULT << ";nb_withdrawals:" << BLUE << _nbWithdrawals;
		std::cout << DEFAULT << std::endl;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << DEFAULT << "accounts:" << BLUE << getNbAccounts();
	std::cout << DEFAULT << ";total:" << BLUE << getTotalAmount();
	std::cout << DEFAULT << ";deposits:" << BLUE << getNbDeposits();
	std::cout << DEFAULT << ";withdwawals:" << BLUE << getNbWithdrawals();
	std::cout << DEFAULT << std::endl;
}
