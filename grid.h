#pragma once
#include <vector>
#include <raylib.h>

using namespace std;

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutSide(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRow();
    int grid[20][10];

private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    int numRows;          // Số hàng
    int numCols;          // Số cột
    int cellSize;         // Kích thước ô
    vector<Color> colors; // Chứa các màu của các Tetrominoes
};