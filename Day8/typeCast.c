#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=3;
    int j=4;
    float f1=i/j;
    float f2=(float)i/j;
    printf("%.2f\n",f1);
    printf("%.2f\n",f2);
    return 0;
}