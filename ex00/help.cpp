/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:07:02 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/09 18:22:48 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "ScalarConverter.hpp"

int print_help(void){
	std::cout << UNDERLINE << BOLD << RED <<"---- HELP ----" << RESET << std::endl;
	std::cout << UNDERLINE << BOLD << ORANGE << "\nchar :" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "valid: 32 to 126 " << RESET << std::endl; 
	std::cout << std::endl;
	std::cout << "invalid: 0 to 31 and 127" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	
	std::cout << std::fixed << std::setprecision(1);

	std::cout << UNDERLINE << BOLD << ORANGE << "\nint :" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << GREEN << "INT MIN: " << RESET << -std::numeric_limits<int>::max() << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BLUE << "INT MAX: " << RESET << std::numeric_limits<int>::max() << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	
	std::cout << UNDERLINE << BOLD << ORANGE << "\nfloat :" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << GREEN << "FLOAT MIN: " << RESET << -std::numeric_limits<float>::max() << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BLUE << "FLOAT MAX: " << RESET << std::numeric_limits<float>::max() << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "FLOAT -INFF: " << RESET << "-inff" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "FLOAT +INFF: " << RESET << "+inff" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "FLOAT NANF: " << RESET << "nanf" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	
	std::cout << UNDERLINE << BOLD << ORANGE << "\ndouble :" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << GREEN << "DOUBLE MIN: " << RESET << -std::numeric_limits<double>::max() << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BLUE << "DOUBLE MAX: " << RESET << std::numeric_limits<double>::max() << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "DOUBLE -INF: " << RESET << "-inf" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "DOUBLE +INF: " << RESET << "+inf" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << PURPLE << "DOUBLE NAN: " << RESET << "nan" << RESET << std::endl;
	std::cout << "-------------" << std::endl;
	return 0;
}