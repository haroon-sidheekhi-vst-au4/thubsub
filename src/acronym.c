#include "acronym.h"
#include <stdio.h>
int main(){
    char x[20],y[20],z[20];
    printf("Enter the name that you want convert");
    scanf("%s %s %s", x, y, z);
    printf("The acronym is :");
     printf("%c. %c. %s\n", x[0], y[0], z[0]);
     return 0;
}