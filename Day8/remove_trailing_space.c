#include <stdio.h>
void removespace(char *s, int len)
{   
    int i=len;
    while(i>=0){
        if(s[i]==" "){
            s[i]='\0';
            i--;
        }
        else break;
    }
    // while(i>=0 && s[i]==' '){
    //     s[i]='\0';
    //     i--;
    // }
    // printf("strring is:%d",s);
    // printf("www");


}
int main()
{
    char *str = "hey     "; // 8
    int len = 0;
    // lets calculate the length
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("len is: %d ", len);
    char *modified_str = malloc(len + 1);
    strcpy(modified_str, str);
    removespace(modified_str, len);
     printf("Modified string: '%s'\n", modified_str);
    printf("->");
    // printf("string is %s",str);
   // printf("after function called: \n");
//      i = 0;
//      len=0;
//     while (temp[i] != '\0')
//     {
//         len++;
//         i++;
//     }
//    printf("len is: %d ", len);
return 0;
}