#include <iostream>

int main()
{
	std::string str;// = "hwegv2k898vhjw";

	std::cout << "Enter word: ";
	std::cin >> str; // ��������� ������ ������ ����������
	
	std::cout << str << "\n" << "Length: " << str.length() << "\n"; // ����� ���������� � �� �����
	std::cout << "First character: " << str[0] << "\n"; // ����� ������� �������
	std::cout << "Last character: " << str[str.size() - 1]; //����� ���������� �������
	 
	return 0;
}