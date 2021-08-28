#include <stdio.h>
#include <stdlib.h>

void swap(int *p1,int *p2){
int z=*p2;
*p2=*p1;
*p1=z;

}




void swapp(char x, char y){
int z=x;
x=y;
y=z;

}

void calculator(int x, int y, int *p1,int *p2){
*p1=x+y;
*p2=x-y;
}





int main()
{
 /*int x;
 scanf(" %d",&x);
 printf(" %d\n",x);
 int *pointer=&x;
 *pointer=20;
 printf(" %d",x);*/
//swaping the values using call by refrence
 /*int x=5,y=4;
 swap(&x,&y);
 printf(" X=%d\n Y=%d",x,y);*/

 //making a function that add&subtract together
 /*int no1,no2,add,sub;
 scanf(" %d %d",&no1,&no2);
 calculator(no1,no2,&add,&sub);
 printf("the sum =%d\n the subtraction=%d\n",add,sub);*/



 /*int a=10;
 if((a==20)|| (30)){
    printf("a");

 }
 else
    printf("c");*/

 /*int i=0;
 switch(i){
 case 0:
     printf("a");
     break;
 case 1:
    printf("b");
     break;
 default:
     printf("d");

 }*/

const int x=255;
int *const p=&x;
*p=40;

printf(" %d", x);







 }
