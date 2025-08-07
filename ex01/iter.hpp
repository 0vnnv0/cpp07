/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:02:35 by anschmit          #+#    #+#             */
/*   Updated: 2025/08/07 12:02:37 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T, typename Func>
void	iter(T* array, std::size_t length, Func function)
{
	for (std::size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif