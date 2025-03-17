#include <iostream>
#include <string>
// Основная функция программы
int
main()
{
  string name;
  std::cout << "Введите ваше имя: "; // Вывод сообщения
  std::cin >> name;
  std::cout << "Hello world from " << name << "!" << endl; // Вывод сообщения
  return 0;
}
