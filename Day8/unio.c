#include<stdio.h>
union un{
    int x;
    int y;
    char z;
    int arr[10];
};
int main(){
    union un u1;
    u1.x=13;
    u1.z='A';
    printf("size of union is: %d",sizeof(u1));
}