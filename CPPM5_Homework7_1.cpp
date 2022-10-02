#include <iostream>

#define MODE 1

#ifndef MODE
#error "Макрос MODE необходим для компиляции программы"
#endif

#if MODE == 1

namespace IntegerArithmetic
{
	int add(int x, int y)
	{
		return x + y;
	}
}

#endif

int main()
{

	setlocale(LC_ALL, "Russian");

#if MODE == 0

	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1

	int x, y, res;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	res = IntegerArithmetic::add(x, y);
	std::cout << "Результат сложения: " << res << std::endl;

#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#endif
}
