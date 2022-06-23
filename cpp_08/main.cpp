/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:56:48 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/23 12:25:59 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

#include <vector>
#include <stack>
#include <queue>

void    printVals(int val) {
    std::cout << val << ", ";
}

template <typename T>
void    testVector(T &cont, int &val) {

    try {
        std::cout << "Find => " << val << " in the following container" << std::endl;
        for_each(cont.begin(), cont.end(), printVals);
        std::cout << std::endl;
        easyfind(cont, val);
        std::cout << " ✅ The container has the value " << val << std::endl;
    }
    catch(std::exception) {
        std::cout << "❌ There is no coincidence" << std::endl;
    }
    std::cout << std::endl;
}

template <typename T>
void    testStack(T &cont, int &val) {

    try {
        std::cout << "Find => " << val << " in the following container" << std::endl;
        for_each(cont.front(), cont.back(), printVals);
        std::cout << std::endl;
        easyfind(cont, val);
        std::cout << " ✅ The container has the value " << val << std::endl;
    }
    catch(std::exception) {
        std::cout << "❌ There is no coincidence" << std::endl;
    }
    std::cout << std::endl;
}



int main(void){

    std::vector<int> vec;;
    std::stack<int> st;;
    std::queue<int> qu;

    //values 
    int a = 3, b = 42, c = 8;

    //determinants
    int success = 42;
    int fail = 1;

    //vector
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    //stack
    st.push(a);
    st.push(b);
    st.push(c);

    //queue
    qu.push(a);
    qu.push(b);
    qu.push(c);

    testVector(vec, success);
    testVector(vec, fail);
    testStack(st, success);
    testStack(st, fail);
    //test(qu, success);
    //test(qu, fail);
    
    return 0;
}