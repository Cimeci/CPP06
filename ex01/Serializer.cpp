/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:17:33 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/09 19:46:21 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"
# include "Data.hpp"

Serializer::Serializer(){}
Serializer::Serializer(const Serializer &cp){*this = cp;}
Serializer &Serializer::operator=(const Serializer &op){
	if (this != &op)
		;
	return *this;
}
Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data* ptr){return (reinterpret_cast<uintptr_t>(ptr));}
Data* Serializer::deserialize(uintptr_t raw){return (reinterpret_cast<Data*>(raw));}