#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

const int size = 3;
const int height = size*size;
const int width = size*size;
int sudoku[height][width];

static void genSudoku()
{
    for(int i = 0; i < size*size; i++)
    {
        for(int j = 0; j < size*size; j++)
        {
            sudoku[i][j] = 0;
        }
    }
}

static bool existsInColumnRow(bool column, int index, int number) // true column false row
{
    if(column)
    {
        for(int i = 0; i < height; i++)
        {
            if(number == sudoku[i][index])
            {
                return true;
            }
        }
    }
    else
    {
        for(int i = 0; i < width; i++)
        {
            if(number == sudoku[index][i])
            {
                return true;
            }
        }
    }

    return false;
}
static bool existsInBox(int i, int j)
{
    int posx = i % size; // 0mod3 = 0 1mod3 = 1 2mod3 = 2
    int posy = j % size;
    int temp[size*size];

}

static void findRootSudoku()
{
    for(int i = 0; i < height; i++) // ROW INDEX
    {
        for(int j = 0; j < width; j++) // COLUMN INDEX
        {
            sudoku[i][j] = (i*size + i/size + j) % (size*size) + 1;
        }
    }
}

static void bruteSudoku()
{











//    for (int k = 1; k < (size * size); k++) {
//        for (int i = 0; i < height; i++) {
//            for (int j = 0; j < width; j++) {
//                if (sudoku[i][j] == 0 && (!existsInColumnRow(true, j, k) && !existsInColumnRow(false, i, k))) {
//                    sudoku[i][j] == k;
//                }
//                else
//                {
//                    if(j == 0)
//                    {
//                        i--;
//                        j=j+8;
//                    } else{
//                        j--;
//                    }
//                    sudoku[i][j]++;
//                }
//
//            }
//        }
//    }
}
//2d array to hold all numbers in puzzle
//Create entire puzzle
//for this position if(k is NOT there or in a row)
//put k there
//increment k and j
//else
//while k exists increment k but no j

static void shuffleSudoku()
{

}

static void backtrackSudoku()
{

}


static void printSudoku()
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int k = sudoku[i][j];
            cout << k;
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    genSudoku();
    //rootSudoku();
    printSudoku();
    genSudoku();
    bruteSudoku();
    printSudoku();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}