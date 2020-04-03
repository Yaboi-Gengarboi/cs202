#include <iostream>
#include <stdexcept>

class J
{
    public:

    J()
    {
        std::cout << "J object constructed" << std::endl;
    }

    ~J()
    {
        std::cout << "J object destructed" << std::endl;
    }
};

void functionC()
{
    throw std::runtime_error("functionC() threw a std::runtime_error");
}

void functionB()
{
    std::cout << "Starting functionB()\n";
    J j0;
    functionC();
    std::cout << "Ending functionB()\n";
}

void functionA()
{
    try
    {
        functionB();
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "Starting main()" << std::endl;
    functionA();
    std::cout << "Ended normally." << std::endl;
    return 0;
}