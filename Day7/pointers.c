//code1
// #include <stdio.h>
 
// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
 
//     printf("%f \n", *ptr2);
//     printf("%d\n",ptr1);
//     printf("%d\n",ptr2);
//     printf("%d", ptr2 - ptr1);
 
//    return 0;
// }



//code2
// #include<stdio.h>
// int main()
// {
//     int a = 12;
//     void *ptr = (int *)&a;
//     printf("%d", *ptr);
//     getchar();
//     return 0;
// }

//ote-> here we are using void pointer and using void 
//pointer derefrencing can not be done  that's why 
//we are getting error

//solution?


//There is compiler error in line
// "printf("%d", *ptr);". void * type pointers
// cannot be de-referenced.
// We must type cast them before de-referencing.
// The following program works fine and prints 12.
#include<stdio.h>

int main()
{
    int a = 12;
    void *ptr = (int *)&a;
    printf("%d", *(int *)ptr);
}