#include "../includes/Span.hpp"

Span::Span(unsigned int N) : _size(N) {
    _v = 0;
}

Span::Span(const Span& src){
    *this = src;
}

Span& Span::operator=(const Span& src){
    if (this != &src){
        this->_num = src._num;
        this->_size = src._size;
        this->_v = src._v;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int n){
    if (static_cast<size_t>(_v) == _size)
        throw std::out_of_range("No more space in the container");
    _num.push_back(n);
    _v++;
}

void Span::AutoAddNumber(){
    for (unsigned int i = 0; i < _size; i++)
        _num.push_back(rand() % 1000);
}

int Span::longestSpan() const{
    if (this->_num.size() < 2)
        throw std::runtime_error("The span is empty or too short to lauch the algorithm");
    int min = *std::min_element(_num.begin(), _num.end());
    int max = *std::max_element(_num.begin(), _num.end());
    return max - min;
}

int Span::shortestSpan() const {
    if (this->_num.size() < 2)
        throw std::runtime_error("The span is empty or too short");
    std::vector<int> copy = _num;
    std::sort(copy.begin(), copy.end());
    int shortest = copy[1] - copy[0];
    for (std::vector<int>::const_iterator it = copy.begin() + 1; it + 1 != copy.end(); it++) {
        int diff = *(it + 1) - *it;
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

