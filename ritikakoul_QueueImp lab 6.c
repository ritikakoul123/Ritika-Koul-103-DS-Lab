#include <stdio.h>
#include <stdbool.h>
# define capacity 100
int line[capacity];
int front = 0;
int rear = -1;
int itemCount = 0;
int peek(){
return line[front];
}
bool QueueisEmpty(){
return itemCount == 0;
}
bool QueueisFull(){
return itemCount == capacity;
}
int size(){
return itemCount;
}
void enqueue(int data){
if(!QueueisFull()){
if(rear == capacity-1){
     rear = -1;
}
line[++rear] = data;
itemCount++;
printf("Element added to the queue %d\n",data);
}
}
int dequeue(){
int data = line[front++];
if(front == capacity){
front = 0;
}
itemCount--;
return data;
}
int main() {

enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(15);

printf("After inserting the elements, queue is: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", line[i]);
        printf("\n");

//since queue is not full, it wont print the given statement
if(QueueisFull()){
printf("Queue is full!\n");
}
int number = dequeue();
printf("The element removed: %d\n",number);

 dequeue(16);

return 0;
}
