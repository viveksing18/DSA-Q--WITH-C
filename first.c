#include <stdio.h>

#define MAX 6

 int queue[MAX];
 int front = -1, rear = -1;

 void enqueue(int value)
 {
     if (rear == MAX - 1)
     {
         printf("Queue Overflow\n");
         return;
     }

     if (front == -1)
         front = 0;

     rear++;
     queue[rear] = value;
 }

 void dequeue()
 {
     if (front == -1 || front > rear)
     {
         printf("Queue Underflow\n");
         return;
     }

     printf("Deleted: %d\n", queue[front]);
     front++;

     if (front > rear)
         front = rear = -1;
 }

 void display()
 {
     if (front == -1)
     {
         printf("Queue Empty\n");
         return;
     }

     for (int i = front; i <= rear; i++)
         printf("%d ", queue[i]);

     printf("\n");
 }

int main()
{
     enqueue(10);
     enqueue(20);
     enqueue(30);
     enqueue(40);
     enqueue(70);
     enqueue(80);
     enqueue(90);


     display();

     dequeue();

     display();

     display();





    return 0;
}
