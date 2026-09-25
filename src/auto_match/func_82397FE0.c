extern int fn_824CD030(int value);

int fn_82397FE0(int object, int index)
{
    unsigned int **ranges = *(unsigned int ***)(object + 0x20);
    unsigned int *end = (unsigned int *)ranges[index][1];
    unsigned int *item = (unsigned int *)ranges[index][0];

    while (item != end && fn_824CD030(*item) == 0) {
        item++;
    }

    return item != (unsigned int *)((unsigned int **)*(int *)(object + 0x20))[index][1];
}
