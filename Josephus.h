#pragma once

typedef struct Node
{
	int num;
	struct Node *next;
}Node, *CLinkList;

//create a circle LinkList, return the first node of address
CLinkList createCLL(int n);