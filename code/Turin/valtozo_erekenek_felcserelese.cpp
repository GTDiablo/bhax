#include <iostream>

int main()
{

    // Segédváltozóóval
    int f = 3;
    int g = 4;

    std::cout << "f=" << f << std::endl;
    std::cout << "g=" << g << std::endl;

    int tmp = f;
    f = g;
    g =  tmp;

    std::cout << "f=" << f << std::endl;
    std::cout << "g=" << g << std::endl;

    std::cout << std::endl;


    // Segéd változó nélkül
    int a = 10;
    int b = 20;

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    a = a*b;
    b = a/b;
    a = a/b;

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    std::cout << std::endl;


    // XOR
    int x = 5;
    int y = 7;

    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;
}
