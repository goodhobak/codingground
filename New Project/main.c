#include <stdio.h>


//linked list 
typedef struct _node
{
	int iNum;
	struct  _node *next;
	
}NODE;

void main()
{
	NODE one;
	NODE two;
	NODE three;
	NODE* p;

	one.iNum = 1;
	two.iNum = 2;
	three.iNum = 3;

	one.next = &two;
	two.next = &three;
	three.next = NULL;
	p = &one;

	for (p = &one; p != NULL;)
	{
		printf("%d -> ", p->iNum);
		p = p->next;
	}
	printf("NULL\n\n");
	//getchar();
}
