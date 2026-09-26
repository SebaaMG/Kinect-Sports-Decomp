extern void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

int fn_826D84D8(int param_1)
{
    int object = *(int *)(param_1 + 0x1c);
    int result = *(int *)(object + 0x84);
    _ReadWriteBarrier();
    return result;
}
