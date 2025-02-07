#include <stdio.h>
int main () {
    char name[100];
    int age;
    char hobby[100];

    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);

    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);

    return 0;
}