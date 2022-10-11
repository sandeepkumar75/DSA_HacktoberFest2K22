#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10
int stack[SIZE];
int top = -1;

void push(int);
void pop();

void push(int val) {
	if (top == SIZE - 1)
		printf("Stack is Full\n");
	else {
		top = top + 1;
		stack[top] = val;
		printf("Pushed: %d\n", val);
	}
}

void pop() {
	if (top == -1)
		printf("Stack is Empty\n");
	else {
		printf("Poped: %d\n", stack[top]);
		top = top - 1;
	}
}

int main()
{
	int ch, ele;

	while (1) {
		printf("1) Push\n");
		printf("2) Pop\n");
		printf("3) Display\n");
		printf("4) Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch (ch) {
		case 1:
			printf("Enter value to push: ");
			scanf("%d", &ele);
			push(ele);
			break;
		case 2:
			pop();
			break;
		case 3:
			printf("Stack: ");
			if (top == -1)
				printf("Stack is Empty");
			else {
				for (int i = 0; i <= top ; ++i)
					printf("%d ", stack[i]);
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
