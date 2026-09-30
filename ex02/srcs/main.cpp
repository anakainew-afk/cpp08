#include "../includes/MutantStack.hpp"

int main() {

    std::cout << "=== Test 1 : push / pop classiques ===" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;   // 17
    mstack.pop();
    std::cout << "top apres pop: " << mstack.top() << std::endl;   // 5
    std::cout << "size: " << mstack.size() << std::endl;           // 1

    std::cout << "\n=== Test 2 : iteration (deque, par defaut) ===" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== Test 3 : constructeur par copie ===" << std::endl;
    MutantStack<int> mstackCopy(mstack);
    std::cout << "copie   : ";
    for (MutantStack<int>::iterator it = mstackCopy.begin(); it != mstackCopy.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    mstackCopy.push(999);
    std::cout << "original (inchange) : ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "copie (modifiee)    : ";
    for (MutantStack<int>::iterator it = mstackCopy.begin(); it != mstackCopy.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== Test 4 : operator= ===" << std::endl;
    MutantStack<int> mstackAssigned;
    mstackAssigned.push(101010);
    std::cout << "assignee (start) : ";
    for (MutantStack<int>::iterator it = mstackAssigned.begin(); it != mstackAssigned.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    mstackAssigned = mstack;
    std::cout << "assignee (after) : ";
    for (MutantStack<int>::iterator it = mstackAssigned.begin(); it != mstackAssigned.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== Test 5 : avec std::vector comme conteneur interne ===" << std::endl;
    MutantStack<int, std::vector<int> > mvector;
    mvector.push(1);
    mvector.push(2);
    mvector.push(3);
    for (MutantStack<int, std::vector<int> >::iterator it = mvector.begin(); it != mvector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== Test 6 : avec std::list comme conteneur interne ===" << std::endl;
    MutantStack<int, std::list<int> > mlist;
    mlist.push(10);
    mlist.push(20);
    mlist.push(30);
    for (MutantStack<int, std::list<int> >::iterator it = mlist.begin(); it != mlist.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== Test 7 : const_iterator ===" << std::endl;
    const MutantStack<int> constStack(mstack);
    for (MutantStack<int>::const_iterator it = constStack.begin(); it != constStack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}

// int main(){

//     MutantStack<int> mstack;
    
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;

//     mstack.pop();

//     std::cout << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
//     while (it != ite){
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }