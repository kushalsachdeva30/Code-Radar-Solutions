// Your code here...
#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int z=x/y;
    if(x==z){
        printf("Yes");
    }
    else{
        printf("No");
    }
}