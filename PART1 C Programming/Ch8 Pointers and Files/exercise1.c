/* exercise1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void Init(void);
void Insert(void);
void Delete(void);
void Display(void);
void Quit(void);
void Write(FILE*);

struct node {
	char name[11];
	char phoneNumber[11];
	struct node* next;
};

struct node *head, *current, *prev, *in;
int flag = 0;

int main()
{
	int option;
	FILE *fptr;
	if ((fptr = fopen("phoneBook.dat", "wb")) == NULL) {
		printf("µLªk¶}±Ò phoneBook.dat");
		_getch();
		exit(1);
	}

	Init();
	while (!flag) {
		printf("=========================\n");
		printf("1) Insert new data\n2) Delete data\n3) Display\n4) Write\n5) Quit\n");
		printf("Please enter the option: ");
		scanf("%d", &option);
		printf("\n");
		switch (option) {
		case 1:
			Insert();
			break;
		case 2:
			Delete();
			break;
		case 3:
			Display();
			break;
		case 4:
			Write(fptr);
			break;
		case 5:
			Quit();
			break;
		default:
			printf("Please enter option from 1~4\n");
		}
	}

	fclose(fptr);

	_getch();
	return 0;
}

void Init(void)
{
	head = (struct node*) malloc(sizeof(struct node));
	head->next = NULL;
}

/* Insert new data in the bottom */
void Insert(void)
{
	in = (struct node*) malloc(sizeof(struct node));
	printf("Please enter the name: ");
	scanf("%s", in->name);
	printf("Please enter the phone number: ");
	scanf("%s", in->phoneNumber);
	in->next = NULL;

	current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = in;
}

/* Delete the data decided by the user */
void Delete(void)
{
	if (head->next == NULL) {
		printf("The list is empty\n");
		return;
	}
	else {
		in = (struct node*) malloc(sizeof(struct node));
		printf("Please type in the data want to delete: ");
		scanf("%s", in->name);
		current = head->next;
		prev = head;
		while ((current != NULL) && (strcmp(in->name, current->name) != 0)){
			current = current->next;
			prev = prev->next;
		}
		if (current != NULL) {
			prev->next = current->next;
			printf("Delete %s\'s data\n", current->name);
			free(current);
		}
		else
			printf("There is no %s\'s data\n", in->name);
	}
}

void Display(void)
{
	current = head->next;
	if (current == NULL)
		printf("The list is empty\n");
	else {
		while (current != NULL) {
			printf("%s %s\n", current->name, current->phoneNumber);
			current = current->next;
		}
	}
}

void Write(FILE *ptr)
{
	current = head->next;
	while (current != NULL) {
		fprintf(ptr, "%-10s %-10s\n", current->name, current->phoneNumber);
		head->next = current->next;
		free(current);
		current = head->next;
	}
}

void Quit(void)
{
	flag = 1;
}