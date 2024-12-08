#include "Span.hpp"

int main()
{

    try
    {
        Span span(5);
        span.addNumber(-1);
        span.addNumber(-99);
        span.addNumber(9);
        span.addNumber(0);
        span.addNumber(6);
        span.addNumber(6);
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}