/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:20:44 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/10 15:41:40 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>
# include <cstdlib>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void){
	std::srand(std::time(0));
	int grade = std::rand() % 3;
	if (grade == 0){A* base = new A(); return base;}
	else if (grade == 1){B* base = new B(); return base;}
	else if (grade == 2){C* base = new C(); return base;}
	return NULL;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p)){std::cout << "A" << std::endl;}
	else if (dynamic_cast<B*>(p)){std::cout << "B" << std::endl;}
	else if (dynamic_cast<C*>(p)){std::cout << "C" << std::endl;}\
	else{std::cout << "Unknown" << std::endl;}
}

void identify(Base& p){
	try{(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;}
	catch(...){
		try{(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;}
		catch (...){
			try{(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;}
			catch (...){std::cout << "Unknown" << std::endl;}
		}
	}
}

int main(void)
{
	std::srand(std::time(0));
	bool grade = std::rand() % 4;
	
	Base *base = NULL;
	if (grade) base = generate();

	std::cout << "+-----------------------------" << std::endl;
	std::cout << "| BASE: " <<  base << std::endl;
	std::cout << "+-----------------------------" << std::endl;
	std::cout << "| Indentify pointer: "; identify(base);
	std::cout << "| Indentify address: "; identify(*base);
	std::cout << "+-----------------------------" << std::endl;
}