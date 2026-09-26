extern void *fn_8265C9E0(unsigned int size);
extern int lbl_821C27D0;

unsigned int *fn_82517678(void)
{
    unsigned int *object = (unsigned int *)fn_8265C9E0(0x28);

    if (object != 0) {
        *(volatile unsigned int *)((char *)object + 4) = 1;
        *(volatile unsigned int *)object = (unsigned int)&lbl_821C27D0;
        *(volatile unsigned int *)((char *)object + 8) = 0;
        *(volatile unsigned int *)((char *)object + 0xC) = 0;
        *(volatile unsigned int *)((char *)object + 0x10) = 0;
        *(volatile unsigned int *)((char *)object + 0x18) = 0;
        *(volatile unsigned int *)((char *)object + 0x1C) = 0;
        *(volatile unsigned int *)((char *)object + 0x20) = 0;

        return object;
    }

    return 0;
}
