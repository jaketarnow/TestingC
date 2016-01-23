/* namelist.c - implementation of the namelist interface */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "namelist.h"

/* namelist nodes */

struct namelist_node *namelist_node_new(char *name, char *email) {
	struct namelist_node *new;

	new = (struct namelist_node *) malloc(sizeof(struct namelist_node));

	if (new == NULL) {
		printf("namelist_node_new: malloc failed\n");
		exit(1);
	}

	new->next = NULL;
	strncpy(new->name, name, MAX_STR_SIZE);
	strncpy(new->email, email, MAX_STR_SIZE);

	return new;
}

struct namelist *namelist_new() {
	struct namelist *new;

	new = (struct namelist *) malloc(sizeof(struct namelist));

	if (new == NULL) {
		printf("namelist_new: malloc failed\n");
		exit(1);
	}

	new->head = NULL;
	new->tail = NULL;

	return new;
}

struct namelist *namelist_add(struct namelist *list, struct namelist_node *node) {
	if (list->head == NULL) {
		node->next = NULL;
		list->head = node;
		list->tail = node;
	} else {
		node->next = NULL;
		list->tail->next = node;
		list->tail = node;
	}
	return list;
}

void namelist_print(struct namelist *list) {
	struct namelist_node *node;

	node = list->head;

	while (node != NULL) {
		printf("[name] %-20s  [email] %-20s \n",
			node->name, node->email);
		node = node->next;
	}
}