#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void clear_scanf(void){
    char c;
    while( (c = getchar()) != '\n' && c != EOF );
}

int main(void){

    int a,b;

    scanf("%c",&a);
    
    clear_scanf();
    printf("hello\n");
    printf("%c,%c\n",a,b);
    scanf("%c",&b);

    printf("%c,%c\n",a,b);
    return 0;
}