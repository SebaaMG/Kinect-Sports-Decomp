extern void *lbl_832975E0;

void *fn_8265C9E0(unsigned int size);

void *fn_8229E7D0(void)
{
    if (lbl_832975E0 == 0) {
        void *object = fn_8265C9E0(0x14);

        if (object != 0) {
            unsigned int zero = 0;

            *(unsigned int *)object = zero;
            *(unsigned int *)((unsigned char *)object + 4) = zero;
            *(unsigned int *)((unsigned char *)object + 8) = zero;
            *(unsigned int *)((unsigned char *)object + 0x10) = zero;
        } else {
            object = 0;
        }

        lbl_832975E0 = object;
    }

    return lbl_832975E0;
}
