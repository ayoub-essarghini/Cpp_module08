#include "easyfind.hpp"

int main()
{
    int num = 5;
    std::vector<int> container;
    container.push_back(2);
    container.push_back(5);
    container.push_back(1);
    container.push_back(6);

    std::vector<int>::iterator it;

    try
    {
        it = easyfind(container, num);
        std::cout << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}