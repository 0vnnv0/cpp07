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