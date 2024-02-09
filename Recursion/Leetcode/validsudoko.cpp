#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>> &board, int row, int col)
{
    char x = board[row][col];

    //         Checking the whole row value
    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == x && i != col)
            return true;
    }

    //         Checking the whole col value
    for (int j = 0; j < 9; j++)
    {
        if (board[j][col] == x && j != row)
            return true;
    }

    int i = row - (row % 3);
    int j = (col / 3) * 3;

    //         Checking the 3 x 3 boxes
    for (int r = i; r < i + 3; r++)
    {
        for (int c = j; c < j + 3; c++)
        {
            if (board[r][c] == x && r != row)
                return true;
        }
    }
    return false;
}

bool isValidSudoko(vector<vector<char>> &board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.' && check(board, i, j))
                return true;
        }
    }
    return false;
}
int main()
{

    vector<vector<char>> board(9, vector<char>(9, '.'));
    board[0][0] = '5';
    board[0][1] = '3';
    board[1][0] = '6';
    board[2][1] = '9';
    board[2][2] = '8';

    board[0][4] = '7';
    board[1][3] = '1';
    board[1][4] = '9';
    board[1][5] = '5';

    board[2][7] = '6';

    board[3][0] = '8';
    board[3][4] = '6';
    board[3][8] = '3';

    board[4][0] = '4';
    board[4][3] = '8';
    board[4][5] = '3';
    board[4][8] = '1';

    board[5][0] = '7';
    board[5][4] = '2';
    board[5][8] = '6';

    board[6][1] = '6';
    board[6][6] = '2';
    board[6][7] = '8';

    board[7][3] = '4';
    board[7][4] = '1';
    board[7][5] = '9';
    board[7][8] = '5';

    board[8][4] = '8';
    board[8][7] = '7';
    board[8][8] = '9';

    cout << "Board is :" << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    bool ans = isValidSudoko(board);

    cout << "Ans is " << ans << endl;
    return 0;
}