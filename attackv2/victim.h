extern char *secret;

void gadget(void);

typedef int cmp_func_t(int, int);

int example_cmp(int a, int b);
int victim_entry(cmp_func_t *cmp);