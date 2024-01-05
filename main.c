#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int m[8][8];

bool valid(int linie_curenta, int coloana_curenta)
{
    int i,j;

    for(i=0;i<coloana_curenta;i++)
    {
        if(m[linie_curenta][i]==1)
        {
            return false;
        }
    }

    for(i=linie_curenta,j=coloana_curenta;i>=0&&j>=0;i--,j--)
    {
        if(m[i][j]==1)
        {
            return false;
        }
    }

    for(i=linie_curenta,j=coloana_curenta;i<8&&j>=0;i++,j--)
    {
        if(m[i][j]==1)
        {
            return false;
        }
    }

    return true;
}

bool rezolva_problema(int coloana)
{
    int i;

    if(coloana==8)
    {
        afisare();
        return true;
    }

    bool rezultat=false;

    for(i=0;i<8;i++)
    {
        if(valid(i,coloana)==true)
        {
            m[i][coloana]=1;
            rezultat=rezolva_problema(coloana+1)||rezultat;

            m[i][coloana]=0;
        }
    }

    return rezultat;
}

void afisare()
{
    int i,j;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    rezolva_problema(0);

    return 0;
}
