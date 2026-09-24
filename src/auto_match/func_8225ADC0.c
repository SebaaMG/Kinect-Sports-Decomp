typedef unsigned int word;
typedef void (*callback)(void *object, int flag);

extern word *fn_8225AD50(void *storage);

word *fn_8225ADC0(word *param_1)
{
    word saved_value;
    word *replacement;
    word *storage[4];

    replacement = fn_8225AD50(storage);
    saved_value = *replacement;
    *replacement = *param_1;
    *param_1 = saved_value;
    if (storage[0] != 0) {
        (*(callback *)*storage[0])(storage[0], 1);
    }
    return param_1;
}
