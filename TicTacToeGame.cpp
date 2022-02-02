#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char current_marker;
int current_player;
void DrawBoard()
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}
bool placeMarker(int slot)
{
    int row = slot / 3;
    int column;
    if (slot % 3 == 0)
    {
        row = row - 1;
        column = 2;
    }
    else
    {
        column = (slot % 3) - 1;
    }
    if (board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = current_marker;
        return true;
    }
    else
    {
        return false;
    }
}

int winner()
{
    for (int i = 0; i < 3; i++)
    {
        //For Rows
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return current_player;
        }

        //For Columns
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return current_player;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return current_player;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return current_player;
    }
    return 0;
}
void swap_player_and_marker()
{
    if (current_marker == 'X')
    {
        current_marker = 'O';
    }
    else
    {
        current_marker = 'X';
    }
    if (current_player == 1)
    {
        current_player = 2;
    }
    else
    {
        current_player = 1;
    }
}
void game()
{
    char marker_p1;
    cout <<endl << "Player 1, choose your marker: ";
    cin >> marker_p1;

    current_player = 1;
    current_marker = marker_p1;
    cout<<endl;
    DrawBoard();
    int player_won;
    for (int i = 0; i < 9; i++)
    {
        int slot;
        cout <<endl << "It's Player " << current_player << "'s Turn. Enter your slot: ";
        cin >> slot;
        if (slot < 1 || slot > 9)
        {
            cout <<endl << "This is an Invalid Slot. Try another slot."<<endl;
            i--;
            continue;
        }
        if (!placeMarker(slot))
        {
            cout << endl<< "The Slot you want to choose is occupied. Try another slot.";
            i--;
            continue;
        }
        cout<<endl;
        DrawBoard();
        player_won = winner();
        if (player_won == 1)
        {
            cout <<endl<< "Player 1 Wins!!!";
            break;
        }
        if (player_won == 2)
        {
            cout <<endl<< "Player 2 Wins!!!";
            break;
        }
        swap_player_and_marker();
    }
    if (player_won == 0)
    {
        cout <<endl<< "It's a Draw!";
    }
}
int main()
{
    game();
    return 0;
}