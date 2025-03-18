
#include <stdio.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d %d",&x,&y);
    scanf(" %c", ch);
    if(ch=='+'){
        printf("%d",x+y);
    }
    else if(ch=='-'){
        printf("%d",x-y);
    }
    else if(ch=='*'){
        printf("%d",x*y);
    }
    else if(ch=='/'){
        printf("%d",x/y);
    }
}