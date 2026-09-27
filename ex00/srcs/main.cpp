#include "../includes/easyfind.hpp"

int main(){

    std::vector<int> num;
    num.push_back(2);
    num.push_back(45);
    num.push_back(9);
    num.push_back(4);
    
    int res = easyfind(num, 4);
    // int res = easyfind(num, 9999);
    if(res == -1)
        return 1;
    std::cout << res << std::endl;
    return 0;
}