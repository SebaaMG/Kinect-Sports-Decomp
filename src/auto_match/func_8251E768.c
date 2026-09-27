/* Lazy one-time initialiser: guards the static setup with a bit flag,
   registers the destructor and the exit hook, then hands back the
   singleton object. */
extern unsigned int lbl_83298FD4;
extern unsigned int lbl_83298F78;
extern void fn_82674748(void *object, void *first, void *second);
extern void atexit(void (*handler)(void));

void fn_8313F460(void);

void *fn_8251E768(void)
{
    unsigned char local[16];
    void *object = (void *)&lbl_83298F78;

    if ((lbl_83298FD4 & 1) == 0) {
        lbl_83298FD4 |= 1;
        fn_82674748(object, local, local);
        atexit(fn_8313F460);
    }

    return object;
}
