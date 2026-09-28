/* 0x82653BD0: 4/5 instructions match (addis, slwi, stw).
 * The trailing eieio cannot be reproduced with cl 16.00.10224.0:
 *   - volatile stores emit no barrier,
 *   - _ReadWriteBarrier/_WriteBarrier/_ReadBarrier expand to nothing,
 *   - `__asm eieio` is rejected with C2759 "Opcode not supported by backend"
 *     (c2.dll's code generator opcode table has no eieio, only sync).
 */
void fn_82653BD0(int object, int value)
{
    *(int *)((object + 0x1ff20000) * 4) = value;
}
