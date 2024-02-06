#include<stdio.h>
#include<stdlib.h>
int main(){
    //dynamic memory alloactaion
    int *p1=(int *)malloc(4*sizeof(int));
    *p1=25;
    printf("data : %d",*p1);
    free (p1);
    printf("pointer : %d ",*p1);
}