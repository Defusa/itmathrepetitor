// Вывести на экран букву "W" из символов "*" (звездочка). 
//

#include "wWithW.h"


int main()
{
	int height;

	std::cout << "Enter W height: ";
	std::cin >> height;
	std::cout << "\n";

	wWithStar(height);
	std::cout << "\n";
	wWithStarTwo(height);
	std::cout << "\n";
	wWithStarThree(height);
	return 0;
}
