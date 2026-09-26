extern int fn_82381548(long, unsigned int);
extern int fn_823814C0(long);
extern unsigned int lbl_831CB180[];

int fn_822CEFA0(unsigned int p)
{
    long context;
    int result;

    context = *(unsigned int *)(*(unsigned int *)(p + 0x1c0) + 0x7e4);
    result = fn_82381548(context, *(unsigned int *)(p + 0x2c));
    if (*(int *)(p + 0x28) == result) {
        return lbl_831CB180[3 + fn_823814C0(context) * 4];
    }
    return 0;
}
