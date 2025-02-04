#pragma once
#include <iostream>
#include <vector>
template <typename T>
typename T::iterator easyfind(T &container, int num)
{
    typename T::iterator it = container.begin();
    for (; it != container.end();it++)
    {
        if (*it == num)
            return it;
    }
    throw std::runtime_error("Cannot find occurence");
    return it;
}