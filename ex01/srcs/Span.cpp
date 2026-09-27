#include "../includes/Span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span& src){
    *this = src;
}

Span& Span::operator=(const Span& src){
    if (this != &src)
        this->_size = src._size;
    return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int n){
    if ()

}