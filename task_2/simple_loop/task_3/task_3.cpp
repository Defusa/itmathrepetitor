// Вывести на экран пять строк из нулей, причем количество нулей в каждой строке равно номеру строки.

#include <iostream>

int main()
{

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "0";
        }
        std::cout << "\n";
    }
}

