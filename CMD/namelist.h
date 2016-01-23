/* namelist.h - list interface */

#define MAX_STR_SIZE 256

struct namelist_node {
	struct namelist_node *next; //next pointer
	char name[MAX_STR_SIZE];
	char email[MAX_STR_SIZE];
};

struct namelist {
	struct namelist_node *head, *tail;
};

/* namelist node functions */

struct namelist_node *namelist_node_new(char *name, char *email);

/* namelist functions */

struct namelist *namelist_new(void);
struct namelist *namelist_add(struct namelist *list, struct namelist_node *node);
void namelist_print(struct namelist *list);