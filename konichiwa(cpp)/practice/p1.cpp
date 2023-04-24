//?------------------------------------------
//! title: hitarth (ghost)
//` date: 2023-04-21 11:37:03
//?------------------------------------------//
#include <iostream>
//$ Q Write a program to print all odd numbers till n.
int main()
{
    int R;
    int r;
    std::cout << "enter your range : ";
    std::cin >> R >> r;
    for (size_t i = R; i <= r; i++)
    {
        if (i % 2 == 0 && 1 != 2)
        {

            std::cout << i << "\tit\'s even" << std::endl;
        }
        else if (i % 2 != 0 || i == 2)
        {
            if (i == 1)
            {
                std::cout << i << "       it's not prime nor composit" << std::endl;
            }
            else
                std::cout << i << "\tit\'s prime & odd" << std::endl;
        }

        else
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}