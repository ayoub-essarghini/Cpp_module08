#include "Span.hpp"

Span::Span() : container(0), N(0) {}

Span::Span(unsigned int _N) : N(_N)
{
}

void Span::addNumber(const int &number)
{
    if (container.size() >= N)
    {
        throw std::overflow_error("Cannot add more numbers, span is full !");
    }

    container.push_back(number);
}

unsigned int Span::longestSpan()
{
    if (container.size() < 2)
    {
        throw std::logic_error("Not enough elements to calculate a span");
    }

    int minElement = *std::min_element(container.begin(), container.end());
    int maxElement = *std::max_element(container.begin(), container.end());

    return abs(maxElement - minElement);
}

unsigned int Span::shortestSpan()
{
    if (container.size() < 2)
    {
        throw std::logic_error("Not enough elements to calculate a span");
    }

    std::vector<int> sortedContainer = container;
    std::sort(sortedContainer.begin(), sortedContainer.end());

    int shortestSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedContainer.size(); ++i)
    {
        int diff = sortedContainer[i] - sortedContainer[i - 1];
        if (diff < shortestSpan)
        {
            shortestSpan = diff;
        }
    }

    return shortestSpan;
}

Span::~Span()
{
}