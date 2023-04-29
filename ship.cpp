#include <iostream>
#include "draw.h"

void create_ship(int *ship_player[], int raw, int col)
{
    draw_dashbord_ship_player(ship_player, raw, col);
    int size_ship, ship_1u = 4, ship_2u = 3, ship_3u = 2, ship_4u = 1;

    while (ship_1u != 0 || ship_2u != 0 || ship_3u != 0 || ship_4u != 0)
    {
        draw_dashbord_ship_player(ship_player, raw, col);
        std::cout << "Введите размер корабля: ";
        std::cin >> size_ship;
        if ((ship_1u == 0 && size_ship == 1) || (ship_2u == 0 && size_ship == 2) || (ship_3u == 0 && size_ship == 3) || (ship_4u == 0 && size_ship == 4))
            continue;
        if (size_ship == 666)
            break;
        std::cout << "Введите координаты расположения коробля:" << std::endl;
        for (int i = 0; i < size_ship; i++)
        {
            int x, y;
            system("clear");
            draw_dashbord_ship_player(ship_player, raw, col);
            std::cout << "\nX: ";
            std::cin >> x;
            std::cout << "Y: ";
            std::cin >> y;
            ship_player[x - 1][y - 1] = 1;
        }
        if (size_ship == 1)
            ship_1u--;
        else if (size_ship == 2)
            ship_2u--;
        else if (size_ship == 3)
            ship_3u--;
        else if (size_ship == 4)
            ship_4u--;
    }
}
