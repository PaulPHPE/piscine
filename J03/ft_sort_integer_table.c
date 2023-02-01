#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void ft_sort_integer_table(int *ptrtab, int size)
{
    // VERSION A
    /* int temp;
    for (int index = 0; index < size - 1; index++)
    {
        for (int index2 = index + 1; index2 < size; index2++)
        {
            if (ptrtab[index] > ptrtab[index2])
            {
                temp = ptrtab[index];
                ptrtab[index] = ptrtab[index2];
                ptrtab[index2] = temp;
            }
        }
    }
    */

    //VERSION B : meilleure version

    int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (ptrtab[i] > ptrtab[i + 1])
		{
			temp = ptrtab[i + 1];
			ptrtab[i + 1] = ptrtab[i];
			ptrtab[i] = temp;
			i = 0;
		}
		else
			i++;
	}


    // PRINT RESULT
    for (int index1 = 0; index1 < size; index1++)
    {
        printf("%d\n", ptrtab[index1]);
    } 
}

int main()
{
    int tab[] = {12, 32, 3, 24, 2, 6};
    int *ptrtab = tab;
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_sort_integer_table(ptrtab, size);

    return 0;
}