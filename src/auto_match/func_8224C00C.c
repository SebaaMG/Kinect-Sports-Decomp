void fn_8224C00C(int *head, int value, int end, int node)
{
    while (node != end) {
        *(int *)((char *)node + 8) = value;
        node = *(int *)((char *)node + 4);
    }
    __builtin_sync();
    *head = value;
}
