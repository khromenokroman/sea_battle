#include <iostream>
#include <fstream>

void write_file_ship_player(int *ship_player[], int raw, int col)
{
    std::ofstream fout;
    fout.open("player.log");
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fout<<ship_player[i][j];
        }
        fout<<std::endl;
    }
    fout.close();
}