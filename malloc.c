

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>


// void fn1(int *p,int (*pp)[] ){
//     printf("%d\n",_msize(p));
//     printf("%d\n",_msize(pp));
//     return ;
// }

int fib(int);
int _fib(int,int,int);

int fib(int count){
    return _fib(1,1,count - 1);
}

int _fib(int this,int last,int count){
    if(count <= 1){
        return this + last;
    }
    return _fib(this + last,this,count - 1);
}

int fib_deep(int count){
    if(count <= 2){
        return count;
    }

    return fib_deep(count - 1) + fib_deep(count - 2);
}

void arg(int len,...){
    va_list ap;
    va_start(ap,len);
    printf("%d\n",va_arg(ap,int));
    printf("%d\n",va_arg(ap,int));
    printf("%d\n",va_arg(ap,int));
    return ;
}

int main(){

    // int a = 10;

    // int *b;

    // b = (int *)malloc(4);

    // *b = 10;

    // printf("%d",*b == a);

    // int (*p)[5] = malloc(20);

    // printf("%d\n",p);


    // (*p)[0] = 1;
    // *(*p + 1) = 2;
    // printf("%d\n",*(p));
    // printf("%d",**p);



    // int (*p)[2][3] = (int (*)[2][3])malloc(sizeof(int)*2*3);


    // (*p)[0][0] = 10086;
    // (*p)[0][1] = 10087;
    // (*p)[0][2] = 10088;
    // (*p)[1][0] = 1111;
    // (*p)[1][1] = 2222;
    // (*p)[1][2] = 3333;

    // printf("%d",*(*(*p)));
    // printf("%d\n",***p);
    // printf("%d",*(*(*p + 1) + 2));




    // int *p = (int *)calloc(5,4);


    // printf("%d\n",_msize(p));

    // int *p1 = (int *)realloc(p,24);



    // size_t a = _msize(p);
    // size_t b = _msize(p1);

    // printf("%d\n",a);
    // printf("%d\n",b);


    // int *p = (int *)malloc(20);
    // int (*pp)[5] = (int (*)[5])malloc(20);

    // printf("%d\n",_msize(p));
    // printf("%d\n",_msize(pp));

    // fn1((int *)pp,pp);


    // printf("fib,%d\n",fib(6));
    // printf("deep,%d\n",fib_deep(6));

    arg(3,1111,222,333);
    return 0;
}
