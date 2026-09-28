/* Sets the per-object enable flag byte and marks bit 0x10000000 in the
   object's status doubleword.  Both stores are volatile so the flag byte
   update is emitted before the status doubleword read-modify-write. */
typedef unsigned long long u64;

void fn_826384A0(int param_1, unsigned char param_2)
{
    *(volatile unsigned char *)(param_1 + 0x2903) = param_2;
    *(volatile u64 *)(param_1 + 0x10) |= 0x10000000ULL;
}
