#include <iostream>
#include <fstream>

#include "menu.h"
#include "draw.h"
#include "ship.h"
#include "work_filesystem.h"

int main()
{
    const int MAX_RAW = 10;
    const int MAX_COL = 10;
    int menu = get_menu();           // получаем то что хочет пользователь
    int data_ship[MAX_RAW][MAX_COL]; // объявим массив кораблей игрока
    int data_hit[MAX_RAW][MAX_COL];  // объявим массив стрельбы игрока

    int *ptr_data_ship[MAX_RAW]; // указатели для массива игрока
    for (int i = 0; i < MAX_RAW; i++)
    {
        ptr_data_ship[i] = data_ship[i];
    }

    int *ptr_data_hit[MAX_RAW]; // указатели для стрельбы игрока
    for (int i = 0; i < MAX_RAW; i++)
    {
        ptr_data_hit[i] = data_hit[i];
    }

    reset_data(ptr_data_ship, ptr_data_hit, MAX_RAW, MAX_COL);

    create_ship(ptr_data_ship, MAX_RAW, MAX_COL);

    draw_dashbord_ship_player(ptr_data_ship, MAX_RAW, MAX_COL); // выводим карту кораблей и стрельбы
    draw_dashbord_hit_player(ptr_data_hit, MAX_RAW, MAX_COL);
    write_file_ship_player(ptr_data_ship, MAX_RAW, MAX_COL);
}