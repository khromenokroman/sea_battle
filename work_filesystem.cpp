#include <iostream>
#include <fstream>

void write_file_ship_player(int *ship_player[], int raw, int col)
{
    std::ofstream fout;
    fout.open("save_ship_player.txt");
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fout << ship_player[i][j] << " ";
        }
        fout << std::endl;
    }
    fout.close();
}
void load_file_ship_player(int *ship_player[], int raw, int col)
{
    std::cout << "Hi" << std::endl;
    std::ifstream fin;
    fin.open("save_ship_player.txt");
    int flag, count_raw = 0, count_col = 0;
    while (!fin.eof())
    {
        
        if (count_col == col)
        {
            count_raw++;
            count_col = 0;
        }
        if (count_raw == raw)
            break;
        fin >> flag;
        ship_player[count_raw][count_col] = flag;
        count_col++;
    }
    fin.close();
}