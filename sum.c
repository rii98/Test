#include <stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    //fourth commit
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Sum(%d,%d)=%d",x,y,sum(x,y));
    //changes made by github
    return 0;
}
