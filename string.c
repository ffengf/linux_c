#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){

    // char a = 'a';

    // a = 101;

    // printf("%c\n",a);

    // char str[] = "麦";

    // printf("%s",str);

    // printf("%d",sizeof(char));

    char str[10] = { '1','2','3','4','1','2','3','4' };

    char *const_str = "hello wolrd;";
    // printf("%s",str);

    // puts(&str[1]);

    printf("%d",strlen(str));

    return 0;
}
