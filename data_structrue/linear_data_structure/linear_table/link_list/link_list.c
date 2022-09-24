#include"link_list.h"

#include<stdio.h>

#include<stdlib.h>


int main()
{
	list_node * first_node;
	first_node=init_list(first_node);

	first_node=add_test(first_node);
	print_list(first_node);
	return 0;
}

