#include<stdio.h>
#include <stdlib.h>


typedef struct link_list
{
	int value;
	struct link_list * next;
}list_node;

list_node * init_list(list_node * list)
{
	list=malloc(sizeof(list_node));
	if(list==NULL)
		exit(1);
	list->value=11;
	list->next=NULL;
	return list;
}

list_node * add_elem(list_node * list , int value)
{
	list_node * new_node=malloc(sizeof(list_node));
	if(new_node==NULL)
		exit(1);
	new_node->value=value;
	new_node->next=list;//head_insert
	return new_node;
}

list_node * add_test(list_node * list)
{
	int value=1;
	while(value!=0)
	{
		scanf("%d",&value);
		list=add_elem(list,value);
	}
	return list;
}

void print_list(list_node * list)
{
	printf("------------------------------\n");
	while(list->next!=NULL)
	{
		printf("%d->",list->value);
		list=list->next;
	}
	printf("%d\n",list->value);
}
list_node * find_value_pointer(list_node * list, int value)
{	
	while(1)
	{
		if(list->value==value)
			return list;
		list=list->next;
	}
}

list_node * delete_elem(list_node * list,int delete_value,int delete_value_prev)
{
	list_node * delete_node_p=

