/* doublyListRandom.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void init_f(void);    /* ��l�Ʀ�C�A�إߤ@�Ÿ`�I��HEAD */
void insert_f(void);  /* ���J��� */
void delete_f(void);  /* �R����� */
void display_f(void); /* ��ܨ�� */
void modify_f(void);  /* �ק��� */

struct student {
	char name[20];          /* �m�W */
	int score;              /* ���� */
	struct student *llink;  /* �`�I���쵲 */
	struct student *rlink;  /* �`�I�k�쵲 */
};
struct student *ptr, *head, *tail, *current_n, *prev;

int main()
{
	char option1;
	
	init_f();
	while (1){
		printf("\n");
		printf("******************\n");
		printf("    1.insert\n");
		printf("    2.delete\n");
		printf("    3.display\n");
		printf("    4.modify\n");
		printf("    5.quit\n");
		printf("******************\n");
		printf(" Enter your choice (1-5): ");
		option1 = _getche();
		printf("\n");
		switch (option1) {
		case '1':
			insert_f();
			break;
		case '2':
			delete_f();
			break;
		case '3':
			display_f();
			break;
		case '4':
			modify_f();
			break;
		case '5':
			printf("\n");
			return 0;
		}
	}
}

void init_f(void) /* �]�@HEAD�A�N���k�쵲�ҫ��V���� */
{
	ptr = (struct student*) malloc(sizeof(struct student));
	strcpy(ptr->name, "0");
	ptr->llink = ptr;
	ptr->rlink = ptr;
	head = ptr;
	tail = ptr;
}

/* �̤��ƪ����C�[�J */
void insert_f(void)
{
	char s_temp[4];

	ptr = (struct student *)malloc(sizeof(struct student));
	printf("\n Student name : ");
	gets(ptr->name);
	printf(" Student score : ");
	gets(s_temp);
	ptr->score = atoi(s_temp);

	prev = head;
	current_n = head->rlink;
	while ((current_n != head) && (current_n->score >= ptr->score)) {
		prev = current_n;
		current_n = current_n->rlink;
	}
	ptr->rlink = current_n;
	ptr->llink = prev;
	prev->rlink = ptr;
	current_n->llink = ptr;
}

void delete_f(void)
{
	char del_name[20], ans;
	int count = 0;

	if (head->rlink == head)
		printf("\n No student record\n");
	else
	    printf(" Delete student name: ");
	gets(del_name);
	prev = head;
	current_n = head->rlink;
	while ((current_n != head) && (strcmp(current_n->name, del_name) != 0)) {
		prev = current_n;
		current_n = current_n->rlink;
	}
	if (current_n != head) {
		/* �T�{�O�_�n�R�� */
		printf(" Are you sure? ");
		ans = _getch();
		if (ans == 'Y' || ans == 'y') {
			prev->rlink = current_n->rlink;
			current_n->rlink->llink = prev;
			free(current_n);
			printf(" Student %s has been deleted\n", del_name);
		}
		else
			printf(" Student %s not found\n", del_name);
	}
}

void modify_f(void)
{
	int count = 0;
	char n_temp[20], s_temp[4];

	if (head->rlink == head)
		printf("\n No student record\n"); /* �L�����ܿ��~ */
	else {
		printf("\n Modify student name: ");
		gets(n_temp);
		current_n = head->rlink;

		while ((current_n != head) && (strcmp(current_n->name, n_temp) != 0)) {
			prev = current_n;
			current_n = current_n->rlink;
		}
		if (current_n != head) {
			printf("******************\n");
			printf(" Student name : %s\n", current_n->name);
			printf(" Student score : %s\n", current_n->score);
			printf("******************\n");
			printf(" Please enter new score: ");
			gets(s_temp);
			current_n->score = atoi(s_temp);
			printf(" Student %s has been modified\n", n_temp);
		}
		else  // �䤣������ܿ��~
			printf(" Student %s not found\n", n_temp);
	}
}

void display_f(void)
{
	int count = 0;

	if (head->rlink == head)
		printf(" No student recore\n");
	else {
		printf("\n");
		printf(" NAME    SCORE\n");
		printf(" --------------\n");
		current_n = head->rlink;
		while (current_n != head) {
			printf(" %-10s %3d\n", current_n->name, current_n->score);
			count++;
			current_n = current_n->rlink;
			if (count % 20 == 0) _getch();
		}
		printf(" ----------------\n");
		printf(" Total %d record(s) found\n", count);
	}
}