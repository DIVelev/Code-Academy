#include <stdio.h>
#include <stdlib.h>
#define size 16
#define limit 100

/*Задача 20.
Напишете програма, която да създаде стек (LIFO) от 16 елемента,
който има следното API
int pop()
void push()
int top()
int isFull()
Вариация: Пробвайте с опашка(FIFO), но вече вие предложете API
и го изпробвайте в main().*/

int  queue[limit];
int front,rear,i,choice;

void insert();
void delete();
void show();
void menu();
void (*func_ptr[3])() = {insert, delete, show};

int main(void){

    front = rear = - 1;
    menu();

    return 0;
}

void insert(){

    int data;
    if(rear == limit - 1){
        printf("Queue overflow\n");
    }
    else{
        if(front == -1)
        front = 0;
        printf("Data to be inserted in the queue:\n");
        scanf("%d",&data);
        rear++;
        queue[rear] = data;
    }

}

void delete(){

    if(front == -1 || front>rear){
        printf("Queue overflow\n");
    }
    else{
        printf("The deleted data in the queue is: %d\n",queue[front]);
        front++;
    }
}

void show(){
    int i;
    if(front == -1){
        printf("Queue overflow\n");
    }
    else{
        printf("Data in the queue: \n");
        for(i=front;i<rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}

void menu(){
    do{
        printf("Menu\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Show\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice){

            case 1:(*func_ptr[0])();
            break;

            case 2:(*func_ptr[1])();
            break;

            case 3:(*func_ptr[2])();
            break;

            case 4: exit(0);
            break;

            default: printf("Please enter a valid choice\n");
            break;
        }
    }while(choice!=4);

}

/*int stack[size];
int flag = -1;

int pop();
void push();
int top();
int isFull();
int isEmpty();

int main(void){

    push(5);
    push(7);
    push(9);
    push(4);
    push(12);
    push(8);
    printf("Element at top of the stack: %d\n", top());
    printf("Elements: \n");
    while (!isEmpty()){
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull() ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty() ? "true" : "false");

}

int pop(){

    int data;
    if(isEmpty != 1){
        data = stack[flag];
        flag = flag - 1;
        return data;
    }
    else{
        printf("Stack is empty\n");
    }

}

void push(int data){

    if(isFull != 1){
        flag = flag+1;
        stack[flag] = data;
    }
    else{
        printf("Stack is full\n");
    }
}

int top(){
    return stack[flag];
}

int isFull(){

    if(flag ==  size){
        return 1;
    }
    else{
        return 0;
    }

}

int isEmpty(){

    if(flag == -1){
        return 1;
    }
    else{
        return 0;
    }
}*/