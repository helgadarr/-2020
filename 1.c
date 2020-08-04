#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("enter x: "); scanf("%d", &x);
    printf("enter y: "); scanf("%d", &y);
    if (x >=-2 && y <= 1 && y==-x){
            printf("ok");}

    else {
        if (x >=-2 && x<=1 && y<0 && y>=-2){
            printf("ok");}
            else {
                printf("not ok");
            }
    }
    return 0;
}
