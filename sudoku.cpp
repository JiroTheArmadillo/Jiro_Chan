#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int genrandom(int min, int max)
{
    return min + rand() % (max-min+1);
}
void xuat(int box[9][9])
{
    int hang,cot;
    for ( hang = 0 ; hang < 9 ; hang++)
    {
        printf("|");
        for(cot = 0 ; cot < 9 ; cot++)
        {
            printf("%d ",box[hang][cot]);
        }
        
        
        printf("|");
        printf("\n");
      

    }
}

void xoa(int box[9][9],int n)
{
    int cot;
    int hang;
    for(int i = 1 ; i <= n ; i++)
    {
        cot = genrandom(0,8);
        hang = genrandom(0,8);
        box[cot][hang] = 0;
    }
}

int kiemtra(int box[9][9],int hang , int cot,int num)
{
    for(int i = 0 ; i < 9 ; i++)
    {
        if(box[i][cot]==num || box[hang][i]==num)
        {
            return  0;
        }
    }
    int starthang=hang - hang%3;
    int  startcot = cot - cot%3;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(box[starthang+i][startcot+j]==num)
            {
                return 0;
            }
        }
    }
    return 1;

}
int main()
{
    int hang,cot;
    srand(time(NULL));

    int box[9][9];

    for(int i = 0 ; i < 9 ; i++)
    {
        for(int j = 0 ; j < 9 ; j++)
        {
            box[i][j] = genrandom(1,9);
            if(!kiemtra(box,i,j,box[i][j]))
            {
                box[i][j] = genrandom(1,9);
            }
        }
    }



   
   

   

   

    
    xoa(box,19);
    xuat(box);



}