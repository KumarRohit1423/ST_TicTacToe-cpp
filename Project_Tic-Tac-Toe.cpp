#include <iostream>
#include <string>
using namespace std;
string sl[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
string bl[10] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
void currboard(int f)
{
    cout << "\n\tTic-Tac-Toe\n\n";
    cout << "Player 1 (X) - Player 2 (O)\n";
    if (f == 1)
    {
        cout << "\n     |     |  \n  " << 1 << "  |  " << 2 << "  |  " << 3;
        cout << "\n_____|_____|_____\n     |     | \n  " << 4 << "  |  " << 5 << "  |  " << 6;
        cout << "\n_____|_____|_____\n     |     | \n  " << 7 << "  |  " << 8 << "  |  " << 9 << "\n     |     | \n\n";
    }
    else
    {
        cout << "\n     |     |  \n  " << bl[1] << "  |  " << bl[2] << "  |  " << bl[3];
        cout << "\n_____|_____|_____\n     |     | \n  " << bl[4] << "  |  " << bl[5] << "  |  " << bl[6];
        cout << "\n_____|_____|_____\n     |     | \n  " << bl[7] << "  |  " << bl[8] << "  |  " << bl[9] << "\n     |     | \n\n";
    }
}
int checkwin()
{
    if (sl[1] == sl[2] && sl[2] == sl[3])
        return 1;
    else if (sl[4] == sl[5] && sl[5] == sl[6])
        return 1;
    else if (sl[7] == sl[8] && sl[8] == sl[9])
        return 1;
    else if (sl[1] == sl[4] && sl[4] == sl[7])
        return 1;
    else if (sl[2] == sl[5] && sl[5] == sl[8])
        return 1;
    else if (sl[3] == sl[6] && sl[6] == sl[9])
        return 1;
    else if (sl[1] == sl[5] && sl[5] == sl[9])
        return 1;
    else if (sl[3] == sl[5] && sl[5] == sl[7])
        return 1;
    else if (sl[1] != "1" && sl[2] != "2" && sl[3] != "3" && sl[4] != "4" && sl[5] != "5" && sl[6] != "6" && sl[7] != "7" && sl[8] != "8" && sl[9] != "9")
        return 0;
    else
        return -1;
}
int main()
{
    currboard(1);
    string plr[3];
    plr[0] = "";
    cout << "Enter name of Player 1: ";
    getline(cin, plr[1]);
    cout << "Enter name of Player 2: ";
    getline(cin, plr[2]);
    int pl = 1, i, ch;
    string mark;
    do
    {
        currboard(0);
        pl = (pl % 2) ? 1 : 2;
        mark = (pl == 1) ? "X" : "O";
        cout << "Player " << pl << ", enter a valid position: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            if (bl[1] == " ")
            {
                bl[1] = mark;
                sl[1] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 2:
        {
            if (bl[2] == " ")
            {
                bl[2] = mark;
                sl[2] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 3:
        {
            if (bl[3] == " ")
            {
                bl[3] = mark;
                sl[3] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 4:
        {
            if (bl[4] == " ")
            {
                bl[4] = mark;
                sl[4] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 5:
        {
            if (bl[5] == " ")
            {
                bl[5] = mark;
                sl[5] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 6:
        {
            if (bl[6] == " ")
            {
                bl[6] = mark;
                sl[6] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 7:
        {
            if (bl[7] == " ")
            {
                bl[7] = mark;
                sl[7] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 8:
        {
            if (bl[8] == " ")
            {
                bl[8] = mark;
                sl[8] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        case 9:
        {
            if (bl[9] == " ")
            {
                bl[9] = mark;
                sl[9] = mark;
                pl++;
            }
            else
            {
                cout << "Invalid move ";
                pl--;
            }
            break;
        }
        default:
        {
            cout << "Wrong move!\n";
            pl--;
            break;
        }
        }
        i = checkwin();
    } while (i == -1);
    currboard(0);
    if (i == 1)
        cout << "\n"
             << plr[--pl] << " wins...";
    else
        cout << "Game Draw";
    return 0;
}
