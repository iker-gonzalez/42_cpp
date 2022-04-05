/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:32:47 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/04/05 09:49:25 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
    int i;
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp(void) {
	struct tm *timeinfo;
	time_t	rawtime;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << std::setfill('0')
		 << "["
		 << timeinfo->tm_year + 1900
		 << std::setw(2) << timeinfo->tm_mon + 1
		 << std::setw(2) << timeinfo->tm_mday
		 << "_"
		 << std::setw(2) << timeinfo->tm_hour
		 << std::setw(2) << timeinfo->tm_min
		 << std::setw(2) << timeinfo->tm_sec
		 << "] ";
}

void    Account::displayStatus(void) const {
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    Account::_totalAmount += deposit;
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    Account::_totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        this->_nbWithdrawals++;
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
}
