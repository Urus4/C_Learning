#include <string>
#include <vector>
#include <iostream>

using namespace std;

int stack[1000] = { 0 };
int stackpt = 0;

bool StackNum(int num)
{
    stack[stackpt] = num;

    if ((stackpt != 0) && (stack[stackpt - 1] == stack[stackpt]))
    {
        stack[stackpt - 1] = 0;
        stack[stackpt] = 0;
        stackpt--;
        return true;
    }
    else
    {
        stackpt++;
        return false;
    }
}


int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int row = board[0].size();
    int count = moves.size();

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if ((board[j][moves[i] - 1]) != 0)
            {

                if (StackNum(board[j][moves[i] - 1]))
                {
                    answer = answer + 2;
                }

                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }

    return answer;
}

int main()
{
    int num = 0;
    vector<vector<int>> board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
    num = solution(board, moves);

    cout << num;

    return 0;
}