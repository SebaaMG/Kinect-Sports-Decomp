extern float *fn_8225AE88(int param_3);

typedef void (*fn_8225AF08_callback)(int *object, int value, float *data);

void fn_8225AF08(int *param_1, int param_2, int param_3)
{
    float data;
    data = *fn_8225AE88(param_3);
    ((fn_8225AF08_callback) * (fn_8225AF08_callback **)(*(int *)param_1 + 0x10))(param_1, param_2, &data);
}
