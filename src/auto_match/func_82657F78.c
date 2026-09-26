void _ReadWriteBarrier(void);

void fn_82657F78(int object)
{
    *(int *)(object + 0x359c) = 0;
    _ReadWriteBarrier();
}
