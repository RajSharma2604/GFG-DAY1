// Implement strcat {} function without
// using string function and
// optimize the function for speed and space
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <stdio.h>

char *custom_strcat(char *dest, const char *src) {
    char *ptr = dest;
    
    // Move the pointer to the end of the destination string
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append the source string to the destination string
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    
    // Add the null-terminating character to the end of the concatenated string
    *ptr = '\0';
    
    return dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    
    printf("Before concatenation: %s\n", str1);
    
    custom_strcat(str1, str2);
    
    printf("After concatenation: %s\n", str1);
    
    return 0;
}

// int main()
// {
//     // string str1 ="hey";
//     // string str2="raj";
//     // int len=str2.size();
//     // for(int i=0;i<len;i++){
//     //     str1.push_back(str2[i]);
//     // }
//     // cout<<str1<<endl;


//     char str1[50]="hello";
//     cout<<str1<<endl;
//     return 0;
// }