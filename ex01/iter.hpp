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