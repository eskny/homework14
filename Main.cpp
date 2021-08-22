#include <iostream>

int main()
{
	std::string str;// = "hwegv2k898vhjw";

	std::cout << "Enter word: ";
	std::cin >> str; // Программа просит ввести переменную
	
	std::cout << str << "\n" << "Length: " << str.length() << "\n"; // Вывод переменной и ее длины
	std::cout << "First character: " << str[0] << "\n"; // Вывод первого символа
	std::cout << "Last character: " << str[str.size() - 1]; //Вывод последнего символа
	 
	return 0;
}