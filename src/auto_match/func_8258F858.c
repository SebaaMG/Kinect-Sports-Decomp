void fn_8258F748(int a, int b, int c, int d);

typedef int (*callback_t)(void *, int);

void fn_8258F858(int a, int b, int c, char *d, int e, char *f, int g)
{
    unsigned int node;
    int res;
    callback_t cb;

    cb = *(callback_t *)(*(int *)f + 0x10);
    res = cb(f, g);
    node = *(unsigned int *)(d + 0xc);
    while (node != 0) {
        d = (char *)node;
        node = *(unsigned int *)(node + 0xc);
    }
    fn_8258F748(a, b - 0xc, *(int *)(d + 0x1c), res);
}
