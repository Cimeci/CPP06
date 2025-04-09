/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:48:48 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/09 18:31:23 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"


// -------------------------------------- // CANONICAL FORM // -------------------------------------- //

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &cp){*this = cp;}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &op){
	if (this != &op)
		;
	return (*this);
}
// ----------------------------------- // SPECIAL CONVERT TOOLS // ----------------------------------- //

int searchLiteralIndex(const std::string& str, const std::string literals[]) {
	for (int i = 0; i < 3; i++) {
		if (str == literals[i])
			return i;
	}
	return -1;
}


void ScalarConverter::convert(std::string &input){

// -------------------------------------- // SPECIAL CONVERT // -------------------------------------- //

	const std::string literalsf[] = {"nanf", "-inff", "+inff"};
	const std::string literalsd[] = {"nan", "-inf", "+inf"};
	int indexf = searchLiteralIndex(input, literalsf);
	int indexd = searchLiteralIndex(input, literalsd);
	int index = indexd == -1 ? indexf : indexd;
	if (index != -1){
		std::cout << UNDERLINE << BOLD << PURPLE <<"---- CONVERT ----" << RESET <<std::endl;
		std::cout << BOLD << "\nchar: " << "Invalid char format" << RESET << std::endl;
		std::cout << BOLD << "\nint: " << "Invalid int format" << RESET << std::endl;
		std::cout << BOLD << "\nfloat: " << literalsf[index] << RESET << std::endl;
		std::cout << BOLD << "\ndouble: " << literalsd[index] << RESET << std::endl;
		return;
	}

// -------------------------------------- // CLASSIC CONVERT // -------------------------------------- //
	
	// DOUBLE CONVERT //
	std::istringstream iss(input);
	double d;
	iss >> d;

	
	if (iss.fail() || !iss.eof())
		throw std::runtime_error("Invalid format");

	std::cout << UNDERLINE << BOLD << PURPLE <<"---- CONVERT ----" << RESET <<std::endl;
	
	// CHAR CONVERT //
	std::cout << BOLD << "\nchar: " << RESET;
	if (std::isprint(static_cast<char>(d))){
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	}
	else{std::cout << "Invalid char format" << std::endl;}
	
	// INT CONVERT //
	std::cout << BOLD << "\nint: " << RESET;
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()){
		std::cout << static_cast<int>(d) << std::endl;
	}
	else {std::cout << "Invalid int format"<< std::endl;}

	// FLOAT CONVERT //
	std::cout << BOLD << "\nfloat: " << RESET;
	if (d >= -std::numeric_limits<float>::max() && d <= std::numeric_limits<float>::max()) {
		std::cout << std::fixed << static_cast<float>(d) << "f" << std::endl;
	}
	else {std::cout << "Invalid float format"<< std::endl;}

	// DOUBLE CONVERT PRINT //
	std::cout << BOLD << "\ndouble: " << RESET;
	if (d >= -std::numeric_limits<double>::max() && d <= std::numeric_limits<double>::max()) {
		std::cout << std::fixed << static_cast<double>(d) << std::endl;
	}
	else {std::cout << "Invalid double format"<< std::endl;}
}