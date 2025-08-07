/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:02:10 by anschmit          #+#    #+#             */
/*   Updated: 2025/08/07 13:24:58 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {

	private:
		T* _arr;
		unsigned int _size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int i); //gibt Referenz auf Element zurueck
		const T& operator[](unsigned int i) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif
