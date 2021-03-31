

#include<stdio.h>
#include<stdlib.h>


struct people {
    char* name;
    int age;
};


struct node{
    int value;
    struct node* next;
};

void push(struct node* head,int value){
    struct node *prev = head;
    while(prev->next != NULL){
        prev = prev->next;
    }
    struct node *next = (struct node*)malloc(sizeof(struct node*));
    next->value = value;
    prev->next = next;
    next->next = NULL;
    return;
}



int main(){


    // struct people people_arr[10];

    // for(int i = 0; i < 10; i++){
    //     struct people item;
    //     item.age = i;
    //     item.name = "hello wolrd";
    //     people_arr[i] = item;
    // }

    // for(int i = 0; i < 10; i++){
    //     printf("%s",people_arr[i].name);
    //     printf("\n");
    //     printf("%d",people_arr[i].age);
    //     printf("\n");
    // }

    struct node header = { 10, NULL };

    for(int i = 0; i < 10; i++){
        // next->value = i;
        // if(i == 9){
        //     next->next = NULL;
        //     break;
        // }
        // next->next = (struct node*)malloc(sizeof(struct node*));
        // next = next->next;
        push(&header,i + 20);
    }
    // push(&header, 20);

    struct node *prev = &header;
    while(prev != NULL){
        printf("%d\n",prev->value);
        prev = prev->next;
    }



    return 0;
}
