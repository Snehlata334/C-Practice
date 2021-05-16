#include<stdio.h>
#include "alphabateHelper.h"

int main(){
    char string[1000];
    printf("Enter the String :");
    scanf("%s", string);
    
   // for (int i = 0; string[i] != '\0';i++) {

    int i=0;
    int row = 9;
    while (string[i] != '\0')
    {
    
    switch (string[i])
    {
    case 'a':
    case 'A':
    printA(row);
        break;
    case 'b':
    case 'B':
    printB(row);
        break;
    case 'c':
    case 'C':
    printC(row);
        break;
    case 'd':
    case 'D':
    printD(row);
        break;
    case 'e':
    case 'E':
    printE(row);
        break;
    case 'f':
    case 'F':
    printF(row);
        break;
    case 'g':
    case 'G':
    printG(row);
        break;
    case 'h':
    case 'H':
    printH(row);
        break;
    case 'i':
    case 'I':
    printI(row);
        break;
    case 'j':
    case 'J':
    printJ(row);
        break;
    case 'k':
    case 'K':
    printK(row);
        break;
    case 'l':
    case 'L':
    printL(row);
        break;
    case 'm':
    case 'M':
    printM(row);
        break;
    case 'n':
    case 'N':
    printN(row);
        break;
    case 'o':
    case 'O':
    printO(row);
        break;
    case 'p':
    case 'P':
    printP(row);
        break;
    case 'q':
    case 'Q':
    printQ(row);
        break;
    case 'r':
    case 'R':
    printR(row);
        break;
    case 's':
    case 'S':
    printS(row);
        break;
    case 't':
    case 'T':
    printT(row);
        break;
    case 'u':
    case 'U':
    printU(row);
        break;
    case 'v':
    case 'V':
    printV(row);
        break;
    case 'w':
    case 'W':
    printW(row);
        break;
    case 'x':
    case 'X':
    printX(row);
        break;
    case 'y':
    case 'Y':
    printY(row);
        break;
    case 'z':
    case 'Z':
    printZ(row);
        break;
    default:
    printf("Invalid Character, we only support albhabets");
    break;
    }
/*
    //printf("%c\n",string[i]);
    if (string[i] == 'a' || string[i] == 'A') {
        printA(row);
    } else if (string[i] == 'b' || string[i] == 'B') {
        printB(row);
    } else if (string[i] == 'c' || string[i] == 'C') {
        printC(row);
    } else if (string[i] == 'd' || string[i] == 'D') {
        printD(row);
    } else if (string[i] == 'e' || string[i] == 'E') {
        printE(row);
    } else if (string[i] == 'f' || string[i] == 'F') {
        printF(row);
    } else if (string[i] == 'g' || string[i] == 'G') {
        printG(row);
    } else if (string[i] == 'h' || string[i] == 'H') {
        printH(row);
    } else if (string[i] == 'i' || string[i] == 'I') {
        printI(row);
    } else if (string[i] == 'j' || string[i] == 'J') {
        printJ(row);
    } else if (string[i] == 'k' || string[i] == 'K') {
        printK(row);
    } else if (string[i] == 'l' || string[i] == 'L') {
        printL(row);
    } else if (string[i] == 'm' || string[i] == 'M') {
        printM(row);
    } else if (string[i] == 'n' || string[i] == 'N') {
        printN(row);
    } else if (string[i] == 'o' || string[i] == 'O') {
        printO(row);
    } else if (string[i] == 'p' || string[i] == 'P') {
        printP(row);
    } else if (string[i] == 'q' || string[i] == 'Q') {
        printQ(row);
    } else if (string[i] == 'r' || string[i] == 'R') {
        printR(row);
    } else if (string[i] == 's' || string[i] == 'S') {
      printS(row);
    } else if (string[i] == 't' || string[i] == 'T') {
        printT(row);
    } else if (string[i] == 'u' || string[i] == 'U') {
        printU(row);
    } else if (string[i] == 'v' || string[i] == 'V') {
        printV(row);
    } else if (string[i] == 'W' || string[i] == 'w') {
        printW(row);
    } else if (string[i] == 'x' || string[i] == 'X') {
        printX(row);
    } else if (string[i] == 'y' || string[i] == 'Y') {
        printY(row);
    } else if (string[i] == 'z' || string[i] == 'Z') {
        printZ(row);
    }
*/
    i++;

    }

}

