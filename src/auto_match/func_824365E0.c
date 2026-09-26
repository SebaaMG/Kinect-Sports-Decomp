extern void *lbl_832975B0;

void *fn_82250A18(void);

int fn_824365E0(void *param_1)
{
    unsigned char *object = (unsigned char *)lbl_832975B0;

    if (object == 0) {
        object = (unsigned char *)fn_82250A18();
    }

    if (object[4] == 0) {
        return 1;
    }

    if (*(int *)(*(unsigned int *)((unsigned char *)param_1 + 0x40) + 0x168) > 0) {
        return 1;
    }

    return 0;
}
