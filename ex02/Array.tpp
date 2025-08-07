/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:14:06 by anschmit          #+#    #+#             */
/*   Updated: 2025/08/07 13:23:01 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(nullptr), _size(n) {
	_arr = new T[n]; //reserviert Speicherplatz fuer n Elemente
}