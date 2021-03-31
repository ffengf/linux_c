#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void say(void);

struct People {
    char *name;
    size_t age;
    double high;
    int (*p);
};

void say(void){
    printf("hello");
}

int main(void){
    
    int arr[] = {11,22,33};
    struct People p1 = { "hello", 20 , 10.5 };

    p1.age = 10;
    p1.name = "你好";
    p1.high = 185.5;
    p1.p = &arr[0];

    printf("%d\n",*(p1.p+1));
    printf("%p\n",p1.p);


    return 0;
}