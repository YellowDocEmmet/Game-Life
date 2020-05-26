#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int i, y, n, m, l;
    FILE * fin = fopen("ILoveSleep.txt" , "r");
    FILE * fun = fopen("IDieEveryMorning.txt" , "w");
    char a[128];
    if (fin == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }
    else
    {
        fscanf (fin, "%d", &n);
        fscanf (fin, "%d", &m);
        int b[n][m];
        for (i=0; i<n; i++)
        {

            for (y=0; y<m; y++)
            {
                fscanf (fin, "%d", &l);
                fprintf(fun, "%d", l);
                b[i][y]=l;
            }
            fprintf(fun, "\n");
        }
        for (i=0; i<n; i++)
        {
            for (y=0; y<m; y++)
                printf("%d", b[i][y]);
            printf ("\n");
        }
    }
    fclose(fin);
    return 0;
}
