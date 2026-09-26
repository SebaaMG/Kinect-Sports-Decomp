union Address { int integer; unsigned char bytes[6]; };

void fn_82899A60(int param_1, int param_2)
{
    ((union Address *)(param_2 + param_1))->bytes[5] = 0;
}
