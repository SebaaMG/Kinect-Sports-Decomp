extern void fn_8234C320(int, void *);

void fn_822B8700(int p, int v)
{
    int b = p + 0x150;
    void *arg;
    if ((arg = (void *)(b + 0x118), *(int *)(p + 0x280) != v)) {
        fn_8234C320(v, arg);
    }
    if ((arg = (void *)(b + 0x144), *(int *)(b + 0x15c) != v)) {
        fn_8234C320(v, arg);
    }
}
