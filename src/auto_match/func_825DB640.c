extern float lbl_821CC160;
extern void fn_825DB6A8(unsigned int, void *, void *);

int fn_825DB640(char *param_1, void *param_2)
{
    fn_825DB6A8(*(unsigned int *)(param_1 + 0x30), param_1, param_2);
    *(float *)(param_1 + 0xa0) = lbl_821CC160;
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0xa4) == 0) {
        *(int *)(param_1 + 0xa4) = 1;
    }
    return 1;
}
