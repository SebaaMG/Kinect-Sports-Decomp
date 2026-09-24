void fn_82251750(int object, long long value)
{
    int result[4];
    int *base = (int *)((char *)object + 0x50);
    int *receiver;

    receiver = (int *)base[6];
    (*(void (**)(int *, long long, int *))(*(int *)receiver + 0x14))(
        receiver, value, result);

    if (*(int **)(base + 4) != 0) {
        (*(void (**)(int *, int))(*(int *)*(int **)(base + 4) + 4))(
            *(int **)(base + 4), result[0]);
    }
}
