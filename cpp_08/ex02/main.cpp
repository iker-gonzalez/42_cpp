/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:16:51 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 13:43:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.cpp"
#include <list>

int main()
{
	std::cout << "1️⃣ SUBJECT TEST" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << "----------" << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "----------" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::cout << "2️⃣ REVERSE ITERATOR TEST" << std::endl;
	MutantStack<int> rv_mstack;
	rv_mstack.push(5);
	rv_mstack.push(17);
	std::cout << rv_mstack.top() << std::endl;
	std::cout << "----------" << std::endl;
	rv_mstack.pop();
	std::cout << rv_mstack.size() << std::endl;
	std::cout << "----------" << std::endl;
	rv_mstack.push(3);
	rv_mstack.push(5);
	rv_mstack.push(737);
	//[...]
	rv_mstack.push(0);
	MutantStack<int>::reverse_iterator rv_it = rv_mstack.rbegin();
	MutantStack<int>::reverse_iterator rv_ite = rv_mstack.rend();
	++rv_it;
	--rv_it;
	while (rv_it != rv_ite)
	{
		std::cout << *rv_it << std::endl;
		++rv_it;
	}
	std::stack<int> rv_s(mstack);

	std::cout << std::endl;

	std::cout << "3️⃣ LIST TEST" << std::endl;
	std::list<int> lst;
	lst.push_front(5);
	lst.push_front(17);
	std::cout << lst.front() << std::endl;
	std::cout << "----------" << std::endl;
	lst.pop_front();
	std::cout << lst.size() << std::endl;
	std::cout << "----------" << std::endl;
	lst.push_front(3);
	lst.push_front(5);
	lst.push_front(737);
	//[...]
	lst.push_front(0);
	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
	std::stack<int> rv_lst(mstack);
	return 0;
}
