#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ShowNumLeters(int n, int pos, char Str[]) {
    int len = strlen(Str);
    for(int i = 0;i < len && i<n;++i){
        printf("%c",Str[i]);
    }
    printf("\n");
    for(int i = len - n;i < len && i>=0 ;++i){
        printf("%c",Str[i]);
    }
    printf("\n");
    for(int i = pos;i<pos+n&&i<len;++i){
        printf("%c",Str[i]);
    }
}

int main () {
    int n, pos;
    scanf("%d%d",&n,&pos);
    getchar();
    char Str[100];
    fgets(Str,sizeof(Str),stdin);
    int len = strlen(Str);
    if (len > 0 && Str[len - 1] == '\n') {
        Str[len - 1] = '\0';
    }
    ShowNumLeters(n,pos,Str);
}