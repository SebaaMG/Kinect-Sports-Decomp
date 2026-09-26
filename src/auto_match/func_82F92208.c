/* Original: stw r3,0x14(r1); lwz r11,0x14(r1); addi r3,r11,4; blr
 * The spill/reload of the incoming argument through its volatile home slot
 * matches a volatile-qualified first parameter. */
int fn_82F92208(volatile int param_1)
{
    return param_1 + 4;
}
