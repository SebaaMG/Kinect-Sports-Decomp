/* Reads a value through a virtual getter and caches the narrowed result. */

extern double fn_828E5538(void *param_1, int param_2, int param_3);

typedef int (*Getter)(void);

void fn_82446C20(int param_1, void *param_2, int param_3)
{
    int object = *(int *)(param_1 + 8);
    Getter getter = *(Getter *)(*(int *)object + 0x14);
    double value = getter(), v = fn_828E5538(param_2, 4, 8);

    if (param_3 != 0) {
        *(float *)(param_3 + 0x1a8) = (float)v;
    }
}
