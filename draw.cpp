#include<iostream>

void reset_data(int *ship_player[], int *hit_player[], int raw, int col) //занулим массивы
{
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ship_player[i][j]=0;
        }
    }
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            hit_player[i][j]=0;
        }
    }
}

void draw_dashbord_ship_player(int *ship_player[], int raw, int col) //отрисовываем карту кораблей
{
    system("clear");
    std::cout << "Карта моих кораблей:"<< std::endl;
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ship_player[i][j]==1)
                std::cout<< "|o";
            else
                std::cout<< "|_";
        }
        std::cout<< "|"<< std::endl;
    }

}

void draw_dashbord_hit_player(int *hit_player[], int raw, int col) //отрисовываем карту стрельбы
{
    std::cout << "\nКарта разведки:"<< std::endl;
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (hit_player[i][j]==1)
                std::cout<< "|o";
            else if (hit_player[i][j]==2)
                std::cout<< "|*";
            else
                std::cout<< "|_";
        }
        std::cout<< "|"<< std::endl;
    }

}