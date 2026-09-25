int fn_822C5B18(char *, unsigned int);
void fn_823000E0(int, int);

void fn_82319BF0(int *self)
{
    char buffer[32];
    char *field;
    unsigned int source;
    char *object;

    ((void (*)(void))(*(void ***)self)[7])();
    source = self[4];
    object = (char *)self[3];
    field = *(char **)(object + 0x1e8);
    *(int *)(field + 0x578) = 0x800;
    fn_823000E0(*(int *)(object + 0x1e8),
                fn_822C5B18(buffer, source + 0x978));
}
