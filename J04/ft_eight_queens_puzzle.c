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
}

void initialChessBoard(int * ptrboard)
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


int numberOfAvailableCases(int *ptrboard)
{
    int index = 0;
    int availableCases = 0;
    while (ptrboard[index])
    {
        if (ptrboard[index] != 0)
        {
            availableCases++;
        }
        index++;
    }
    return availableCases;
}

int *reduceBoard(int *ptrboard, int queensPosition)
{
    printf("queensPosition %d\n", queensPosition);
    int modulo = queensPosition % 8;
    printf("modulo %d\n", modulo);
    // WE WILL REMOVE ALL INDEXES WITH SAME MODULO
    // BECAUSE SAME MODULE MEANS SAME COLUMN

    int quotien = queensPosition / 8;
    printf("quotien %d\n", quotien);
    // WE WILL REMOVE ALL INDEXES WITH SAME QUOTIEN
    // BECAUSE SAME QUOTIEN MEANS SAME ROW

    // COLUMN AND ROW
    for (int index = 0; index < 64; index++)
    {
        printf("test1");
        /* if (ptrboard[index] / 8 == quotien)
        {
            ptrboard[index] = 0;
        }
        else if (ptrboard[index] % 8 == modulo)
        {
            ptrboard[index] = 0;
        } */
    }
    printChessBoard(ptrboard);

    // NOW DIAGONALS
    int i;
    int rowSpace;
    for (i = 1; i <= 8; i++)
    {
        // Get the number of row between the queens row and i
        if (i < quotien)
        {
            rowSpace = quotien - i;
            ptrboard[(queensPosition - 1) - (8 * rowSpace) - rowSpace] = 0;
            ptrboard[(queensPosition - 1) - (8 * rowSpace) + rowSpace] = 0;
        }
        else if (i > quotien)
        {
            rowSpace = i - quotien;
            ptrboard[(queensPosition - 1) + (8 * rowSpace) - rowSpace] = 0;
            ptrboard[(queensPosition - 1) + (8 * rowSpace) + rowSpace] = 0;
        }
    }

    return ptrboard;
}

int puzzleResolution(int *ptrboard, int queensPosition, int queenNumber, int numberOfSolutions)
{
    // NUMBER OF AVAILABLE CASES AT THE BEGINING OF THE PROCESS:
    printf("test1");
    /* int startNumberAvailableCases = numberOfAvailableCases(ptrboard);
    printf("test2 startNumberAvailableCases: %d\n", startNumberAvailableCases);
    if (startNumberAvailableCases == 0)
    {
        return 0;
    }

    // NUMBER OF SOLUTIONS :
    if (queenNumber == 8)
    {
        numberOfSolutions += startNumberAvailableCases;
        printf("number of solutions : %d\n", startNumberAvailableCases);
    }
    else
    {
        int index = queensPosition - 1;
        while (ptrboard[index])
        {
            if (ptrboard[index] != 0)
            {
                numberOfSolutions += puzzleResolution(reduceBoard(ptrboard, ptrboard[index]), ptrboard[index], queenNumber++, numberOfSolutions);
            }
            index ++;
        }
    }
    return numberOfSolutions; */
    return 0;
}

int ft_eight_queens_puzzle(void)
{
    int board[64];
    int * ptrboard = board;
    initialChessBoard(ptrboard);
    printf("\n %p \n", ptrboard);
    printChessBoard(ptrboard);
    /* int solutions = 0;
    for (int index = 1; index <= 64; index++)
    {
        printf("test0 ");
        solutions += puzzleResolution(reduceBoard(chessBoard, index), index, 1, 0);
    };
    return solutions; */
    return 3;
}

int main()
{
    ft_eight_queens_puzzle();
    return 0;
}