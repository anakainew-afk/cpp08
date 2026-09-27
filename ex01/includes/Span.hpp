#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <iostream>
#include <vector>

class Span{
private:
    size_t _size;
public:
    Span(unsigned int N);
    Span(const Span& src);
    Span& operator=(const Span& src);
    ~Span();

    void addNumber(unsigned int n);
};

#endif