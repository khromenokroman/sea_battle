#include <iostream>

void get_text_menu()
{
    system("clear");
    std::cout << "**************************\n";
    std::cout << "\tМОРСКОЙ БОЙ\n";
    std::cout << "**************************\n\n";
    std::cout << "1. Новая игра\n";
    std::cout << "2. Сохранить игру\n";
    std::cout << "3. Загрузить игру\n";
    std::cout << "4. Покинуть игру\n\n";
    std::cout << "**************************\n\n";
    std::cout << "Выберите пункт меню: ";
}

int get_menu()
{
    int error = 0, menu = 0;
    while (menu != 1 && menu != 2 && menu != 3 && menu != 4)
    {
        get_text_menu();
        std::cin >> menu;
        if (error > 5)
        {
            std::cout << "Ксожалению вы вводили не правильный ответ много раз!!!" <<std::endl;
            return 0;
            break;
        }
        error++;
    }
    return menu;
}