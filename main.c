#include<stdio.h>
#include "print.h"

int main(int argc,char *argv[]){
	printf("hello wolrd\n");
	// print();

	int a[] = {1,2,3,4,5};

	for(int i = 0;i<5;i++){
		printf("i=%d,value=%d\n",i,a[i]);
		if(a[i] % 2 == 0){
			printf("%d\n",a[i]);
		}
	}

	return 0;
}
