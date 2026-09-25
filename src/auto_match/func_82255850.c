typedef void (*VectorFunction)(int *object, int argument, float *result);
typedef void (*ScalarFunction)(int *object, float value);

void fn_82255850(int object, int argument)
{
    char *context = (char *)object + 0x50;
    int *receiver = *(int **)(object + 0x68);
    float result[4];

    (*(VectorFunction *)(*(int *)receiver + 0x14))(
        receiver, argument, result);

    if (*(unsigned int *)(context + 0x10) != 0) {
        (*(ScalarFunction *)(*(int *)(*(int *)(context + 0x10)) + 4))(
            *(int *)(context + 0x10), result[0]);
    }
}
