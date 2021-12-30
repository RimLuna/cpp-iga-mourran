#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    std::cout << 1 + ltm->tm_mon;
    std::cout << ltm->tm_mday;
    std::cout << "_";
    std::cout << ltm->tm_hour;
    std::cout << ltm->tm_min;
    std::cout << ltm->tm_sec;
    std::cout << "] ";
}

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std:: cout << "created" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::Account(void) : _accountIndex(this->_nbAccounts), _amount(0),
_nbDeposits(0), _nbWithdrawals(0)
{
	this->_nbAccounts += 1;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created"
	<< std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed"
	<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}
