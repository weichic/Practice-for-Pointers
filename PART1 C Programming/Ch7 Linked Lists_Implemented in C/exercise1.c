/* exercise1.c */
/* 加入和刪除都在串列的前端 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void Insert();
void Delete();
void Display();
void Quit();
struct student{
	int id;
	int score;
	struct student *next;
};
struct student *x, *head, *current;
int main()
{
	/* 串列的第一個節點存放資料 */
//	head = (struct student *) malloc(sizeof(struct student));
//	head->next = NULL;
	for (;;) {
		int a;
		printf("\n");
		printf("1)Insert\n2)Delete\n3)Display\n4)Quit\n");
		printf("Which one: ");
		scanf("%d", &a);
		printf("\n");
		switch (a)
		{
		case 1: Insert();
			break;
		case 2: Delete();
			break;
		case 3: Display();
			break;
		case 4: Quit();
			break;
		}
	}
	printf("\n\n~~~~~~~~~~~~~~~~FINISH~~~~~~~~~~~~~`");
	_getch();
	return 0;
}

/* 加入一節點於串列前端 */
void Insert()
{
	/* 配置記憶體，並指定資料 */
	x = (struct student*)malloc(sizeof(struct student));
	printf("Please input your ID: ");
	scanf("%d", &x->id);
	printf("Please input your score: ");
	scanf("%d", &x->score);
	x->next = NULL;

	x->next = head;
	head = x;
	printf("======================\n");
}

/* 刪除串列前端的節點 */
void Delete()
{
	char ch;
	/* 判斷串列是否有資料 */
	if (head == NULL)
	{
		printf("The stack is empty!\n");
		printf("==================================\n");
		return;
	}
	printf("Are you sure (y/n)? ");
	ch = _getche();

	if (tolower(ch) == 'y') {
		current = head;
		printf("\n%d record has been deleted!!!", current->id);
		head = current->next;
		free(current);
	}
	printf("\n==================================================\n");
}
void Display()
{
	if (head == NULL)
		printf("The stack is empty!\n");
	else {
		current = head;
		while (current != NULL) {
			printf("ID:%d, score = %d\n", current->id, current->score);
			current = current->next;
		}
	}
	printf("==================================\n");
}

void Quit()
{
	exit(0);
}