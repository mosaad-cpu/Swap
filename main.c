#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void swap(int,int);

int main(){
int x;
int y ;

printf("please enter ur first num:\n");
scanf("%d",&x);
printf("please enter ur sec number:\n");
scanf("%d",&y);

swap(x,y);

    return 0;
}
void swap(int x,int y){

 x =x*y;
 y= x/y;
 x=x/y;



printf("ur first num:%d ur sec num:%d",x,y);




}
