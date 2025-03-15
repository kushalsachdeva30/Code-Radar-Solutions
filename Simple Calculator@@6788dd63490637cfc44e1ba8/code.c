
#include <stdio.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d %d %c",&x,&y, &ch);
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
        printf("%.2f",x/y);
    }
}