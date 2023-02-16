#include <stdio.h>

// NOT WORKING, THE RECURRENCE IS THE PROBLEM WE WILL HAVE TO STAY WITH VERSION 1
void printChessBoard(int *ptrboard)
{
    int index;
    for (int index = 0; index <= 63; index++)
    {
        printf("%d ", ptrboard[index]);
        if ((index + 1) % 8 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

void initialChessBoard(int *ptrboard)
{
    // construct chess board
    // la zone de mémoire pour board => est liée à cette fonction
    // elle est désaloué
    // @gestion de mémoire par fonction
    // mémoire désalloué quand tu exit la fonction
    for (int boardIndex = 0; boardIndex <= 63; boardIndex++)
    {
        ptrboard[boardIndex] = boardIndex + 1;
    };
    printChessBoard(ptrboard);
}

int numberOfAvailableCases(int *ptrboard, int availableCases)
{
    for (int index = 0; index <= 63; index++)
    {
        if (ptrboard[index] != 0)
        {
            availableCases = availableCases + 1;
        }
    }
    return availableCases;
}

int *reduceBoard(int *ptrboard, int queensPosition)
{
    int modulo = queensPosition % 8;
    // WE WILL REMOVE ALL INDEXES WITH SAME MODULO
    // BECAUSE SAME MODULE MEANS SAME COLUMN

    int quotien = queensPosition / 8;
    // WE WILL REMOVE ALL INDEXES WITH SAME QUOTIEN
    // BECAUSE SAME QUOTIEN MEANS SAME ROW

    // COLUMN AND ROW
    for (int index = 0; index < 64; index++)
    {
        if ((ptrboard[index] - 1) / 8 == quotien)
        {
            ptrboard[index] = 0;
        }
        else if (ptrboard[index] % 8 == modulo)
        {
            ptrboard[index] = 0;
        }
    }

    // NOW DIAGONALS
    int i;
    int rowSpace;
    int diagonalStartPosition;
    for (i = 1; i <= 8; i++)
    {
        // Get the number of row between the queens row and i
        diagonalStartPosition = queensPosition - 1;
        if (i < quotien)
        {
            rowSpace = quotien - i;
            if ((diagonalStartPosition - (8 * rowSpace) - rowSpace) / 8 == i)
            {
                ptrboard[diagonalStartPosition - (8 * rowSpace) - rowSpace] = 0;
            }
            if ((diagonalStartPosition - (8 * rowSpace) + rowSpace) / 8 == i)
            {
                ptrboard[diagonalStartPosition - (8 * rowSpace) + rowSpace] = 0;
            }
        }
        else if (i > quotien)
        {
            rowSpace = i - quotien;
            if ((diagonalStartPosition + (8 * rowSpace) - rowSpace) / 8 == i)
            {
                ptrboard[diagonalStartPosition + (8 * rowSpace) - rowSpace] = 0;
            }
            if ((diagonalStartPosition + (8 * rowSpace) + rowSpace) / 8 == i)
            {
                ptrboard[diagonalStartPosition + (8 * rowSpace) + rowSpace] = 0;
            }
        }
    }

    printChessBoard(ptrboard);
    return ptrboard;
}

int puzzleResolution(int *ptrboard, int queensPosition, int queenNumber, int numberOfSolutions)
{
    queenNumber++;
    printf("queenNumber %d :", queenNumber);
    printf("queensPosition %d :", queensPosition);
    int availableCases = 0;
    // NUMBER OF AVAILABLE CASES AT THE BEGINING OF THE PROCESS:
    availableCases = numberOfAvailableCases(ptrboard, availableCases);
    printf("availableCases: %d\n", availableCases);
    if (availableCases == 0)
    {
        return 0;
    }

    // NUMBER OF SOLUTIONS :
    if (queenNumber == 8)
    {
        numberOfSolutions += availableCases;
    }
    else
    {
        for (int index = queensPosition - 1; index <= 63; index++)
        {
            if (ptrboard[index] != 0)
            {
                queensPosition = ptrboard[index];
                numberOfSolutions += puzzleResolution(reduceBoard(ptrboard, ptrboard[index]), queensPosition, queenNumber, numberOfSolutions);
            }
        }
    }
    return numberOfSolutions;
}

int ft_eight_queens_puzzle(void)
{
    int board[64];
    int *ptrboard = board;
    initialChessBoard(ptrboard);
    int solutions = 0;
    int index = 1;
    int queensPostion = 1;
    int queenNumber = 1;
    for (int index = 1; index <= 64; index++)
    {
        initialChessBoard(ptrboard);
        solutions = puzzleResolution(reduceBoard(ptrboard, index), queensPostion, queenNumber, solutions);
        printf("SOLUTIONS : %d  !!!!!!!!!!!!!!!!!\n", solutions);
        printf("\n");
    };
    return solutions;
}

int main()
{
    ft_eight_queens_puzzle();
    return 0;
}