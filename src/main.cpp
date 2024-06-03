#include <iostream>
import mod.Test;

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << addOne(1) << std::endl;
    std::cout << powTwo<10>::value << std::endl;
    return 0;
}
