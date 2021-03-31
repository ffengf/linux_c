#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // int a[5];
    
    // for(int i = 0;i<5;i++){
    //     a[i] = i;
    //     printf("%d,%p\n",a[i],&a[i]);
    // }

    // printf("%p\n",&a + 1);

    // int arr[][5] = {{1,2},{3,4},{5},{6}};

    int a[5] = {1231,312312,3123123,1120,133};

    int b[5] = {99,99,99,99,99};

    memcpy(&b[3],&a[3],sizeof(int) * 2);



    for(int i = 0;i < 5;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}