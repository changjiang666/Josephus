#include "Josephus.h"

CLinkList createCLL(int num)
{
	int i = 0;
	CLinkList head, tmp, curr;
	curr = head = (CLinkList)malloc(sizeof(Node));
	if (!head)
		exit(0);
	for (; i < num; ++i)
	{
		tmp = (CLinkList)malloc(sizeof(Node));
		tmp->num = i + 1;
		curr->next = tmp;
		curr = tmp;
	}
	curr->next = head->next;
	free(head);
	return curr->next;
}