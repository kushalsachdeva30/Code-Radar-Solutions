// Your code here...
#include <stdio.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d %d %c",&x,&y, &ch);
    int s = x+y;
    int d = x-y;
    int p = x*y;
    int di = x/y;
    if(ch=='+'){
        printf("%d",s);
    }
    else if(ch=='-'){
        printf("%d",d);
    }
    else if(ch=='*'){
        printf("%d",p);
    }
    else if(ch=='/'){
        printf("%d",di);
    }
}