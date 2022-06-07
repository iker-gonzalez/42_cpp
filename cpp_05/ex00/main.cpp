/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:23:40 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/07 09:41:05 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test(Bureaucrat p1, Bureaucrat p2, Bureaucrat p3)
{
    std::cout << "[📝]INFO BUREAUCRAT CREATED" << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl; 
}

int main(void)
{
    try
    {
        std::cout << "[1️⃣ ]TEST 1. [🆕👫]CREATE BUREAUCRAT MAX GRADE INVALID" << std::endl;
        test(Bureaucrat("Braulio", 20), Bureaucrat("Shakira", -1), Bureaucrat("Minerva", 12));
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

    std::cout << std::endl;

    try
    {
        std::cout << "[2️⃣ ]TEST 2.[🆕👫]CREATE BUREAUCRAT MIN GRADE INVALID" << std::endl;
        test(Bureaucrat("Braulio", 20), Bureaucrat("Shakira", 152), Bureaucrat("Minerva", 12));
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    
    std::cout << std::endl;

    try
    {
        std::cout << "[3️⃣]TEST 3.[🆕👫]CREATE BUREAUCRAT VALID GRADE" << std::endl;
        test(Bureaucrat("Braulio", 20), Bureaucrat("Shakira", 52), Bureaucrat("Minerva", 12));
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    
    std::cout << std::endl;
    
    try {
        std::cout << "[4️⃣]TEST 4.[📈📉]CHANGE GRADE(INCREMENT ERROR)-----" << std::endl;
        Bureaucrat person1("Braulio", 20);
        Bureaucrat person2("Shakira", 1);
        Bureaucrat person3("Minerva", 21);
       try { 
            person1.incrementGrade();
            person2.incrementGrade();
            person3.incrementGrade();
            test(person1, person2, person3);
            std::cout << "-----[📝]INFO BUREAUCRAT AFTER GRADE CHANGE------" << std::endl;
            std::cout << person1 << std::endl;
            std::cout << person2 << std::endl;
            std::cout << person3 << std::endl;
            std::cout << "[✅]All grade could sucefully change" << std::endl;
        }   
        catch (std::exception &e){
      std::cout << e.what() << std::endl;}
   }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

        std::cout << std::endl;
   

     try {
            std::cout << "[5️⃣ ]TEST 5.[📈📉]CHANGE GRADE(DECREMENT ERROR)" << std::endl;
            Bureaucrat person1("Braulio", 150);
            Bureaucrat person2("Shakira", 50);
            Bureaucrat person3("Minerva", 21);
        try { 
            person1.decrementGrade();
            person2.decrementGrade();
            person3.decrementGrade();
             std::cout << "[✅]All grade could sucefully change" << std::endl;
            test(person1, person2, person3);
        }   
        catch (std::exception &e){
            std::cout << e.what() << std::endl;}
        }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

     std::cout << std::endl;

    try {
    std::cout << "[6️⃣ ]TEST 6.[📈📉]CHANGE GRADE" << std::endl;
    Bureaucrat person1("Braulio", 20);
    Bureaucrat person2("Shakira", 50);
    Bureaucrat person3("Minerva", 21);
       try { 
        person1.decrementGrade();
        person2.incrementGrade();
        person3.decrementGrade();
        test(person1, person2, person3);
         std::cout << "[✅]All grade could sucefully change" << std::endl;
        }   
        catch (std::exception &e){
      std::cout << e.what() << std::endl;}
   }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

    return (0);
}