extern void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void fn_826D8580(int param_1, int param_2, int param_3)
{
    *(int *)(param_1 + 0x88) = param_3;
    _ReadWriteBarrier();
    *(int *)(param_1 + 0x84) = param_2;
}
