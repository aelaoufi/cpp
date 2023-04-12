/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:26:07 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/12 00:45:30 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serialize::serialize(t_data *ptr)
{
	uintptr_t ser = reinterpret_cast<uintptr_t>(ptr);
	return (ser);
}

t_data 		*Serialize::deserialize(uintptr_t raw)
{
	t_data *des = reinterpret_cast<t_data*>(raw);
	return (des);
}