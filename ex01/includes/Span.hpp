#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <cstdlib>

class Span{
private:
    std::vector<int> _num;
    int _v;
    size_t _size;
public:
    Span(unsigned int N);
    Span(const Span& src);
    Span& operator=(const Span& src);
    ~Span();

    void addNumber(unsigned int n);
    void AutoAddNumber();
    int shortestSpan() const;
    int longestSpan() const;
};

#endif