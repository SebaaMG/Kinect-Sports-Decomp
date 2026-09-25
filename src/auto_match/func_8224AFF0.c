extern void *fn_8265C9E0(int size);
extern char lbl_82197B2C;

void *fn_8224AFF0(void *param_1)
{
    void *result = fn_8265C9E0(0x10);

    if (result != 0) {
        *(unsigned int *)result = (unsigned int)&lbl_82197B2C;
        *(unsigned int *)((char *)result + 4) = *(unsigned int *)((char *)param_1 + 4);
        *(unsigned int *)((char *)result + 8) = *(unsigned int *)((char *)param_1 + 8);
        *(unsigned int *)((char *)result + 12) = *(unsigned int *)((char *)param_1 + 12);
    }
    else {
        return 0;
    }

    return result;
}
