/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:20:44 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/09 17:41:18 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc < 2){return (std::cerr << "Usage: ./convert <value>\n", 1);}

	std::string input = argv[1];
	
	if (input == "-help"){return print_help();}

	try{ScalarConverter::convert(input);}
	catch(std::runtime_error &e){
		std::cout << UNDERLINE << BOLD << PURPLE <<"---- CONVERT ----" << RESET <<std::endl;
		std::cout << BOLD << "\nchar: " << e.what() << RESET << std::endl;
		std::cout << BOLD << "\nint: " << e.what() << RESET << std::endl;
		std::cout << BOLD << "\nfloat: " << e.what() << RESET << std::endl;
		std::cout << BOLD << "\ndouble: " << e.what() << RESET << std::endl;
	}
}