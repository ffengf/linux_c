




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max_arr(int p[],int size){
    int max = p[0];

    for(int i = 1; i < size;i++){
        if(max < p[i]){
            max = p[i];
        }
    }

    return max;
}

void fn1(void);
void fn2(void);

int a = 0;

void fn1(void){
    a++;
    if(a == 10){
        return;
    }
    printf("fn1\n");
    fn2();
}

void fn2(void){
    a++;
    if(a == 10){
        return;
    }
    printf("fn2\n");
    fn1();
}

int main(void){

    // int arr[1] = { 100 };

    // int max_num = max_arr(arr,1);

    // printf("%d",max_num);


    fn1();
    return 0;
} 