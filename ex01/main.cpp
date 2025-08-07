/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:02:29 by anschmit          #+#    #+#             */
/*   Updated: 2025/08/07 12:02:31 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	printInt(int const &x) {
	std::cout << x << std::endl;
}

void	printStr(std::string str) {
	std::cout << str << std::endl;
}

int	main(){

	std::cout << "----- int -----" << std::endl;
	int numbers[] = {1, 6, 3, 44, 77};
	std::size_t length = sizeof(numbers) / sizeof(numbers[0]);
	iter(numbers, length, printInt);

	std::cout << "----- string -----" << std::endl;
	std::string words[] = {"Hello", "world"};
	iter(words, 2, printStr);
	return 0;
}