#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

void enque(int);
void deque();

void enque(int val) {
	if (rear >= SIZE - 1)
		printf("Queue is Full");
	else {
		if (front && rear == -1) {
			front = front + 1;
			rear = rear + 1;
			queue[rear] = val;
			printf("Inserted: %d\n", val);
		} else {
			rear = rear + 1;
			queue[rear] = val;
			printf("Inserted: %d\n", val);
		}
	}
}

void deque() {
	if (front == -1)
		printf("Queue is Empty");
	else {
		printf("Deleted: %d\n", queue[front]);
		if (front == rear)
			front = rear = -1;
		else
			front = front + 1;
	}
}

int main() {
	int ch, ele;

	while (1) {
		printf("1) Insert\n");
		printf("2) Delete\n");
		printf("3) Display\n");
		printf("4) Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch (ch) {
		case 1:
			printf("Enter value to insert: ");
			scanf("%d", &ele);
			enque(ele);
			break;
		case 2:
			deque();
			break;
		case 3:
			printf("Queue: ");
			if (front == -1)
				printf("Query is Empty");
			else {
				for (int i = front; i <= rear ; ++i)
					printf("%d ", queue[i]);
			}
			printf("\n\n");
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid Choice\n");
		}
		getch();
	}
	return 0;
}
