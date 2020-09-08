//Player.cpp

#include "player.h"

Player::Player() {}

Player::~Player() {}

void Player::PrintMyShips()
{
    my_ships.printBoard();
}

void Player::PrintEnemyShips()
{
    enemy_ships.printBoard();
}

bool Player::PlaceShip(int size, int row, char c_col, bool horizontal)
{
    int col = toupper(c_col) - 65;

    if (horizontal)
    {
        if (9 - col >= size)
        {
            for (int j = col; j < col + size; j++)
            {
                //if (my_board.checkSpot(row, j) == '-') return false;
            }
            for (int j = col; j < col + size; j++)
            {
                //my_board.updateBoard(row, j, 'O')
            }
        }
        else return false;
    }
    else
    {
        if (9 - row >= size)
        {
            for (int i = row; i < row + size; i++)
            {
                //if (my_board.checkSpot(i, col) == '-') return false;
            }
            for (int i = row; i < row + size; i++)
            {
                //my_board.updateBoard(i, col, 'O')
            }
        }
        else return false;
    }

    return true;

}