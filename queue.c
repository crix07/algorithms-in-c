#include<stdio.h>
#define SIZE 5

int values[SIZE], front = -1, rear = -1;

void enQueue(int n) {

    if (rear == SIZE - 1)
        printf("we queue is full \n");
    else {
        if (front == -1)
            front = 0;
        
        rear++;
        values[rear] = n;
        printf("Se inserto el valor %d Correctamente \n", n);


    }

}


void deQueue() {

    if (front == -1)
        printf("We Queue is empty \n");
    else {

        printf("Se elimino el valor %d \n", values[front]);
        front++;

        if (front > rear)
            front = rear = -1;
        else
            rear--;

    }
}


void lookArray() {

    printf("Contenido del array: \n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d \n", values[i]);
    }


}



int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    enQueue(10);
    lookArray();
    return 0;
}

