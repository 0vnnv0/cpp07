/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:01:49 by anschmit          #+#    #+#             */
/*   Updated: 2025/08/07 13:31:09 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main ()
{
	std::cout << " ----- empty array ----- " << std::endl;
	Array<int> a;
	std::cout << " ➡️ Size: " << a.size() << std::endl;
	
	std::cout << " ----- unsigned int ----- " << std::endl;
	Array<int> b(5);
	std::cout << " ➡️ Size: " << b.size() << std::endl;
	
	std::cout << " ----- copy constructor ----- " << std::endl;
	
}