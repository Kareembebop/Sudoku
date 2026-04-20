#pragma once
#include <vector>
class SudokuBoard{
    private:
    std::vector<std::vector<int>> board;
    public:
    SudokuBoard();

    void PrintBoard() const;

    bool isvalidMove(int row, int col,int value) const;
    
    bool setCellValue(int row ,int col, int value) const;

    int getCellValue(int row, int col) const;



};