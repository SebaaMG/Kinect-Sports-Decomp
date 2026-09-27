extern void *fn_82522DF8(unsigned int size);

void fn_825231B8(unsigned int param_1)
{
    unsigned int count = (param_1 + 7) >> 3;
    unsigned int *head = (unsigned int *)fn_82522DF8(count - ((count - 1) & 3) + 15);

    if (head != 0) {
        head[0] = param_1;
        head[1] = count;
        head[2] = (unsigned int)(head + 3);
    }
}
