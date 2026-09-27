#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <string>
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T& first, int second){
    for (typename std::vector<int>::const_iterator it = first.begin(); it != first.end(); it++){
        if (second == *it)
            return second;
    }
    std::cerr << "No occurences in the container" << std::endl;
    return -1;
}

#endif