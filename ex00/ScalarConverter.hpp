/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:21:35 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/09 16:12:49 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "colors.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>
# include <iomanip>

class ScalarConverter{

	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &cp);
		ScalarConverter &operator=(const ScalarConverter &op);

	public:
		static	void convert(std::string &input);
		
};

int print_help(void);