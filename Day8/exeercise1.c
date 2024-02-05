#include<stdio.h>

int main()
{
    int arr[3] = {2, 3, 4};
    char *p;
    p = arr;
    //p is pointing to 2 
    //now p is a charecter pointer and 2 is integer type
    //let int is of 2BYTE
    //2=00000000 00000010
    //  {BYTE1}  {BYTE0}
    //currently p is pointing to BYTE0

    p = (char*)((int*)(p));
    printf("%d, ", *p);
    p = (int*)(p+1);
    printf("%d ,", *p);
    p=p+1;
    printf("%d", *p);
     p=p+1;
    printf("%d", *p);
     p=p+1;
    printf("%d", *p);
    return 0;
}