#include <stdio.h>
#include <stdlib.h>

//Create the Node Struct
struct linkedList {
	int num;
	struct linkedList *next;
};

struct linkedList *current = NULL;
struct linkedList *head = NULL;

//Main method that gets the int, creates the linked list, then deletes the nodes
void main(){

	printf("hello world!\n");
	int K;
    printf("Enter an number: ");
    scanf("%d", &K);  
    printf("You entered = %d\n",K);
	int size = sizeof(struct linkedList);
	head = malloc(size);
	head -> num = 0;
	head -> next = NULL;
	printf("Hello World #%d\n", head -> num);
	current = head;

	for(int i = 1; i < K; i++)
	{
		struct linkedList *temp = malloc(sizeof(*temp));
		temp -> num = i;
		printf("Hello World #%d\n", temp -> num);
		current -> next = temp;
		current = temp;
	}

	current = head;

	while(current != NULL)
	{
		struct linkedList *deleter = current->next;
		printf("Farewell #%d\n", current -> num);
		free(current);
		current = deleter;
	}
}
