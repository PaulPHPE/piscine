#include <stdio.h>

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

int *reduceBoard(int *ptrboard, int queensPosition)
{
    int modulo = queensPosition % 8;
    // WE WILL REMOVE ALL INDEXES WITH SAME MODULO
    // BECAUSE SAME MODULE MEANS SAME COLUMN

    int quotien = (queensPosition - 1) / 8;
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

int puzzleResolution(int *ptrboard, int queenNumber, int *combinaison)
{
    int queenPosition = combinaison[queenNumber - 1];
    printf("queensPosition %d \n", queenPosition);
    printf("queenNumber %d \n", queenNumber);
    if (ptrboard[queenPosition - 1] == 0)
    {
        return 0;
    }
    else if (queenNumber == 8)
    {
        return 1;
    }
    else
    {
        queenNumber++;
        return puzzleResolution(reduceBoard(ptrboard, ptrboard[queenPosition - 1]), queenNumber, combinaison);
    }
}

int *potentialSolution()
{
    int combinaison[8];
    int queenNumber = 0;
    // combinaison de 8 colonne * combinaison de 8 ligne
    for (int cell = 1; cell <= 8; cell++)
    {
       
    }
}

int ft_eight_queens_puzzle(void)
{
    int board[64];
    int *ptrboard = board;
    initialChessBoard(ptrboard);
    int solutions = 0;
    int queenNumber;
    queenNumber = 1;
    for (int index = 1; index <= 64; index++)
    {
        initialChessBoard(ptrboard);
        solutions += puzzleResolution(ptrboard, queenNumber, index);
    }
    printf("ft_queens: %d \n", solutions);
    return solutions;
}

int main()
{
    printf("solutions :%d \n", ft_eight_queens_puzzle());
    return 0;
}