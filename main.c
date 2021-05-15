#include<stdio.h>

int main(){
    char string[1000];
    printf("Enter the String :");
    scanf("%s", string);

   // for (int i = 0; string[i] != '\0';i++) {

    int i=0;
    while (string[i] != '\0')
    {

    printf("%c\n",string[i]);

    i++;

    }

}

