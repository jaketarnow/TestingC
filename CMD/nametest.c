/* nametest.c - test the namelist implementation */

#include <stdio.h>
#include <stdlib.h>
#include "namelist.h"

int main(int argc, char *argv[]) {
	struct namelist *list;
	struct namelist_node *node;

	list = namelist_new();

	node = namelist_node_new("testing1", "test@test.com");
	namelist_add(list, node);

	node = namelist_node_new("testing2", "test2@test.com");
	namelist_add(list, node);

	node = namelist_node_new("testing3", "test3@test.com");
	namelist_add(list, node);

	namelist_print(list);

	return 0;
}