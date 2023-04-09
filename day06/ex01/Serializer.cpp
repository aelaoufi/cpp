/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:26:07 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/09 00:38:00 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serialize::serialize(Data *ptr)
{
	uintptr_t ser = reinterpret_cast<uintptr_t>(ptr);
	return (ser);
	
}

Data 		*Serialize::deserialize(uintptr_t raw)
{
	Data *des = reinterpret_cast<uintptr_t>(raw);
	return (des);
}