typedef unsigned int fn_82394380_word;

typedef void (*fn_82394380_callback)(void *, int);

extern fn_82394380_word *fn_82394310(fn_82394380_word *);

fn_82394380_word *fn_82394380(fn_82394380_word *param_1)
{
    fn_82394380_word stack[4];
    fn_82394380_word *value = fn_82394310(stack);
    fn_82394380_word old_value = *value;

    *value = *param_1;
    *param_1 = old_value;
    if (stack[0] != 0) {
        fn_82394380_callback callback = *(*(fn_82394380_callback **)stack[0]);
        callback(stack[0], 1);
    }
    return param_1;
}
