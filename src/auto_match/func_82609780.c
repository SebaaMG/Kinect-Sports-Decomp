extern void fn_826097E8(void);
extern int fn_82CE5410(void);

int fn_82609780(int param_1, unsigned int param_2)
{
    fn_826097E8();
    if (param_2 & 1) {
        int *obj = *(int **)(fn_82CE5410() + 0x10);
        (*(void (**)(int *, int, unsigned short))(*(int *)obj + 8))(
            obj, param_1, *(unsigned short *)(param_1 + 4));
    }
    return param_1;
}
