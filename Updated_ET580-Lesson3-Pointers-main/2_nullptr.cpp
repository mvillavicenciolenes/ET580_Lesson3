// S. Trowbridge 2024
#include <iostream>

int main() 
{
    std::cout << std::endl;

    int *p;    
    int i = 9999;                                     // p -> garbage (dangling pointer)

    //std::cout << *p << "\n";                        // logical error: deferencing the pointer returns garbage

    p = nullptr;                                    // p is now safe

    if(p == nullptr) {                              // we can test if p is safe         
        std::cout << "p is safe" << std::endl;
    }

    p = &i;
    std::cout << *p << "\n";  
    std::cout << " Dereference P  = value of i  " << *p << "P value " << p << "  I address "    << &i << "Address of p " << &p  << std::endl;                  // runtime error: cannot dereference nullptr results in segmentation fault

    std::cout << std::endl;
    return 0;
}
