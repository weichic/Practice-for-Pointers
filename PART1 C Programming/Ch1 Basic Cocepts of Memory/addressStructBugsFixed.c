/* addressStructBugsFixed.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/* �ŧi���c�ܼ� */
	struct employee
	{
		char id[7];       /* ID���X */
		char name[20];    /* ���u�m�W */
		int salary;       /* �ұo�~�� */
	};
	/* �w�q���c�ܼơA�ó]�w���� */
	struct employee manager = { "D12345", "Peter", 35000 };

	/* �L�X���c�ܼƪ��O�����} */
	printf("&manager = %x\n", &manager);
	printf("&manager.id = %x\n", &manager.id);
	printf("&manager.name = %x\n", &manager.name);
	printf("&manager.salary = %x\n\n", &manager.salary);

	/* �L�X���c�ܼƪ��� */
	printf("manager.id = %s\n", manager.id);
	printf("manager.name = %s\n", manager.name);
	printf("manager.salary = %d\n\n", manager.salary);
	system("PAUSE");
	return 0;
}