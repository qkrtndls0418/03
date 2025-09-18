#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *argv[]) {
    //ex 3.
    char c, d;
    
    printf("enter a character : ");
    scanf("%c", &c);
    
    d = c +1;
    printf("The next character of %c (%i) is %c (%i).\n",c,c,d,d);
    
    system("PAUSE");}
