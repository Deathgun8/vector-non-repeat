#include <stdio.h>

int main(void)
{
    int i, N[10], maior, menor, soma, possui, num;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        possui = 0;

        for (int j = 0; j < 10; j++)
        {
            if (num == N[j])
            {
                possui = 1;
            }
        }

        if (possui == 1)
        {
            printf("Numero repetido \n");
            i--;
        }
        else
        {
            N[i] = num;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", N[i]);
    }
}