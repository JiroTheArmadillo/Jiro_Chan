#include <stdio.h>
#include <string.h>

void ShowNum(int n,int pos, char *s)
{
    size_t len = strlen(s);
    if(n<len)
    {   
        // 3 ky tu dau
        for(int i = 0 ; i < n ; i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");

        //3 ky tu sau

        for(int i = len-n ; i < len ; i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");

        // tu vi tri pos

        if(len-pos > n)
        {
            int i = 0 ; 
            while(i<n)
            {
                printf("%c",s[i]);
                i++;
            }
        }
        else
        {
            while(s[pos]!='\0')
            {
                printf("%c",s[pos]);
                pos++;
            }
        }

    }
    else
    {
        for(int i = 0 ; i < len ; i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
        printf("\n");
        int i = 0;
        while(i<n)
        {
            printf("%c",s[i]);
            i++;
        }
        
    }
}


int main()
{
    int n , pos;
    scanf("%d%d",&n,&pos);
    getchar();
    fgets()
    
    
}
