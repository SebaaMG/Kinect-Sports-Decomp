extern void fn_82359C18(void *object);
extern void fn_8265CA20(void *object);

void fn_823D6298(void *param_1, void *param_2_object)
{
    int *param_2 = (int *)param_2_object;
    char done;
    int *parent;
    int *field;

    done = *(char *)((int)param_2 + 0x49);
    while (done == 0) {
        fn_823D6298(param_1, param_2[2]);
        parent = (int *)*param_2;
        field = param_2 + 6;
        fn_82359C18(field + 6);
        fn_82359C18(field);
        fn_8265CA20(param_2);
        param_2 = parent;
        done = *(char *)((int)param_2 + 0x49);
    }
}
