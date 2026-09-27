/* fn_82F93A00: volatile-qualified pointer parameter is spilled to
   0x14(r1) by the compiler, reloaded, and field +4 is returned. */
int fn_82F93A00(int *volatile param_1)
{
    return *(int *)((char *)param_1 + 4);
}
