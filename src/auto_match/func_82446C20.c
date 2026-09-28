/* Reads a value through a virtual getter and caches the narrowed result. */

extern float fn_828E5538(void *param_1, int param_2, int param_3);

typedef int (*Getter)(void *object);

void fn_82446C20(int param_1, void *param_2, unsigned int param_3)
{
    void *object = *(void **)(param_1 + 8);
    Getter getter = *(Getter *)(*(int *)object + 0x14);
    float value;

    getter(object);

    value = fn_828E5538(param_2, 4, 8);

    if (param_3 != 0) {
        *(float *)(param_3 + 0x1a8) = value;
    }
}
