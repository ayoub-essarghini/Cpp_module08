#pragma once
#include <iostream>
#include <vector>
template <typename T>
typename T::iterator easyfind(T& container,int num)
{
    typename T::iterator it = container.begin();
    typename T::iterator it2 = container.end();

    while (it != container.end())
    {
        if (*it == num)
            return it;
        it++;
    }
    return it2;
}