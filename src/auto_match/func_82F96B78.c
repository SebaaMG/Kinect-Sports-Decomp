/*
 * fn_82F96B78 ignores both arguments and returns 1, yet the original build
 * still spills the incoming registers to their parameter home slots, which is
 * what this compiler emits for a leaf that is not optimized.
 */
#pragma optimize("", off)

int fn_82F96B78(int param_1, int param_2)
{
    (void)param_1;
    (void)param_2;
    return 1;
}
