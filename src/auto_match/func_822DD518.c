void fn_822DD518(signed char *a, signed char *b, signed char *c)
{
    if (*b < *a) {
        signed char value = *b;
        *b = *a;
        *a = value;
    }

    if (*c < *b) {
        signed char value = *c;
        *c = *b;
        *b = value;
    }

    if (*b < *a) {
        signed char value = *b;
        *b = *a;
        *a = value;
    }
}
